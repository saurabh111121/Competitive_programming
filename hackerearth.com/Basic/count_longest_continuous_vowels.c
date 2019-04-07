#include<stdio.h>
#include<string.h>
int vow(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
int max(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}
int check(char s[100001]){
    int count=0,res=0;
    int i;
	for(i=0;i<=strlen(s);i++){
        if(vow(s[i]))
        count++;
        //printf("count value 1 %d",count);
        else{
            res=max(res,count);
            //printf("res value =>%d \n",res);
            count=0;
            
        }
        //printf("count value %d\n",count);
        
    }
    return res;
}
int main(){
    char s[100001];
    fgets(s,100001,stdin);
    int x = check(s);
	printf("%d",x);
    return 0;
}


// best solution
/*
#include<stdio.h>
int main(){
	char b[100005];
	scanf("%s",b);
	int j,l,count=0,ans=0;
	l=strlen(b);
	for(j=0;j<l;j++){
		if(b[j]=='a'||b[j]=='e'||b[j]=='i'||b[j]=='o'||b[j]=='u'){
			++count;
		}
		else{
			count=0;}
		if(count>ans)
		{
		    ans = count;
		}
			
	}
	printf("%d",ans);
	return 0;
}

*/
