#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
	char str[100], str1[100], s[100], ss[100], ch, str2[100], sss[100];
	int i = 0, j = 0;
	cin >> str >> str1;
	int a = atoi(str);
	int b = atoi(str1);
	int c = a + b;
	sprintf(str2, "%d", c);
	int len = strlen(str);
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	for(i = 0; i < len; i++){
		if(str[i] != '0'){
			s[j] = str[i];
			j++;
		}
	}
	s[j] = NULL;
	j = 0;
	for(i = 0; i < len1; i++){
		if(str1[i] != '0'){
			ss[j] = str1[i];
			j++;
		}
	}
	ss[j] = NULL;
	j = 0;
	for(i = 0; i < len2; i++){
		if(str2[i] != '0'){
			sss[j] = str2[i];
			j++;
		}
	}
	sss[j] = NULL;
	a = atoi(s);
       	b = atoi(ss);	
	c = a + b;
	int res = atoi(sss);
	if(c == res)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}
