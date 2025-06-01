#include <stdio.h>
#include <string.h>

int main(){
    char current_position[500];
    scanf("%s",current_position);
    int danger_counter =0;
    int i =0;
    loop:
    if(current_position[i]=='1'&&current_position[i+1]=='1'&&current_position[i+2]=='1'&&current_position[i+3]=='1'&&current_position[i+4]=='1'&&current_position[i+5]=='1'&&current_position[i+6]=='1'){
        printf("YES");
        return 0;
    }
    else if(current_position[i]=='0'&&current_position[i+1]=='0'&&current_position[i+2]=='0'&&current_position[i+3]=='0'&&current_position[i+4]=='0'&&current_position[i+5]=='0'&&current_position[i+6]=='0'){
        printf("YES");
        return 0;
    }
    if(i==strlen(current_position))
    {
      goto last; 
    }
    i++;
    goto loop;
    last:
    printf("NO");
    
}