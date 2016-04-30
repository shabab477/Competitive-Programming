#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main() {
    
    int row, col;
    scanf("%d", &row);
    scanf("%d", &col);
    
    char ch[row][col];
    string s = "";
    getline(cin, s);
    
    for(int c = 0; c < row; c++)
    {
        getline(cin, s);
        for(int i = 0; i < col; i++)
        {
            ch[c][i] = s.at(i);
        }
        
    }
    

    int count = -1;
    int num = 0;
    bool gone = true;
    while(gone)
    {
        
        count = 0;
        int myR = 0;
        int myC = 0;
        int maxR = 0;
        int maxC = 0;
        gone = false;
        for(int c = 0; c < row; c++)
        {
            count = 0;
            bool flag = false;
            for(int i = 0; i < col; i++)
            {
                if(ch[c][i] == 'S')
                {
                    flag = true;
                    break;
                }
                else if(ch[c][i] == '.')
                {
                    count++;
                }
                
            }
            
            if(flag)
            {
                count = 0;
            }
            if(maxR < count)
            {
            	gone = true;
                maxR = count;
                myR = c;
            }
            
        }
        
        for(int i = 0; i < col; i++)
        {
            count = 0;
            bool flag = false;
            for(int c = 0; c < row; c++)
            {
                if(ch[c][i] == 'S')
                {
                    flag = true;
                    break;
                }
                else if(ch[c][i] == '.')
                {
                    count++;
                }
                
            }
            
            if(flag)
            {
                count = 0;
            }
            
            if(count > maxC)
            {
            	gone = true;
                maxC = count;
                myC = i;
            }
        }
        
        //printf("%d\n", count);
        if(gone)
        {
            if(maxR > maxC)
            {
                for(int c  = 0; c < col; c++)
                {
                	//printf("%c\n", ch[myR][c]);
                    if(ch[myR][c] == '.')
                    {
                        ch[myR][c] = ' ';
                        num++;
                    }
                }
            }
            else
            {
                for(int c = 0; c < row; c++)
                {
                //	printf("%c\n", ch[c][myC]);
                    if(ch[c][myC] == '.')
                    {
                        ch[c][myC] = ' ';
                        num++;
                    }
                }
            }
        }
    }
    
    printf("%d\n", num);
    
    return 0;
}