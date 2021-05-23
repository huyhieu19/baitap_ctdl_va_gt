#include<iostream>

using namespace std;

int a[100001];
int l[100001];
void printArray(int a[], int l, int r){
	for (int i = l; i <=r; i++){
		cout << a[i] << " ";
	}
}
int main(){
	int n, x;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	l[0] = 1;
	for (int i = 1; i < n; i++){
		if (a[i] >= a[i-1]){
			l[i] = l[i-1] + 1;
		} else {
			l[i] = 1;
		}
	}
	int csMax = 0;
	for (int i = 0; i < n; i++){
		if (l[csMax] < l[i]){
			csMax = i;
		}
	}
	printArray(a, csMax - l[csMax] + 1, csMax);
	return 0;
}
