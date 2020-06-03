#include <bits/stdc++.h>
using namespace std;

int slen(char *c) {
	int len = 0;
	
	while(*c != '\0'){
			len++;c++;
		
		}
		return len;
	
	}


int main()
{
	char s[101];
	int len , dc = 0;
	
	scanf("%s", &s[0]);
	len = slen(&s[0]); // counting length of len -> pointing to the function int slen()
	
	for(int i = 0; i < len ; ++i){
		for(int j = i + 1;j < len;j++){
			
			if(s[i] == s[j]){
				
				s[j] = '?';
				}
			}
		
		}
	
	for(int i = 0; i < len ; ++i){
		if(s[i] != '?'){
				dc++;
			}
		}
	if(dc%2 == 0){
		cout<<"CHAT WITH HER!"<<"\n";
		}else{
			cout<<"IGNORE HIM!"<<"\n";
			}
	return 0;
	}
