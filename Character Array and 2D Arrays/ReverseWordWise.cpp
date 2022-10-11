/*
Reverse Word Wise
Send Feedback
Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on. Individual words should remain as it is.
Input format :
String in a single line
Output format :
Word wise reversed string in a single line
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome
Sample Input 2:
Always indent your code
Sample Output 2:
code your indent Always
*/
void reverseStringWordWise(char input[]) {
    int count=0;
    for(int l=0;input[l]!=0;l++){
        count+=1;
    }
    int i=0;
    int j=count-1;
    
    while(i<j){
        char temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        
      
    i++;
    j--;
    }
   
  int p=0;
   for(int i=0;i<=count;i++){
       if(input[i]=='\0' || input[i]==' '){
            int q=i-1;
 			while(p<q){
                char temp=input[p];
                input[p]=input[q];
                input[q]=temp;
            p++;
            q--;    
            }
           p=i+1;
       }      
    }
}
