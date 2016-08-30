#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
int n;
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
	priority_queue <int > dp;

	while(cin>>n){
		dp.push(n);
	}
	for(int i=0;i<3;i++){
		int output=dp.top();
		dp.pop();
		cout<<output<<"\n";
	}
	return 0;
}
