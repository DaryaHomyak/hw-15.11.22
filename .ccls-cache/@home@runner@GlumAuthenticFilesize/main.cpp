#include <iostream>
using namespace std;
string total_order[100] = {};
int total_price[100] = {};
int ind = 0;
void call_menu();
void call_1();
void call_2();
void call_3();
void total_ord();
void call_menu(){
	cout << "MENU" << endl;
	cout << "1. mandish" << endl;
	cout << "2. drinks" << endl;
	cout << "3. deserts" << endl;
	int n;
	cin >> n;
	if (n==1) call_1();
	else if (n == 2) call_2();
	else if (n == 3) call_3();
	else {
		cout << "ERR";
			call_menu();
			};
	
}
void call_1(){
	string menu[3] = {"pizza", "soup", "chiken"};
	int prices[3] = {100, 200, 175};
	cout << menu[0] << " " << prices[0] << endl;
	cout << menu[1] <<  " " << prices[1] << endl;
	cout << menu[2] <<  " " << prices[2] << endl;
	int n;
	cin >> n;
	if (n==1) {
		total_order[ind] = menu[0];
		total_price[ind] = prices[0];
		ind ++;
			}
	else if (n == 2) {
		total_order[ind] = menu[1];
		total_price[ind] = prices[1];
		ind ++;
			}
	else if (n == 3) {
		total_order[ind] = menu[2];
		total_price[ind] = prices[2];
		ind ++;

			}
	else {
		cout << "ERR";
			call_menu();
			};
	cout << "1 - return to menu" << endl;
	cout <<  "2 - show total order" << endl;
	cin >> n;
	if (n==1) {
			call_menu();
			}
	else if (n == 2) {
		total_ord();
	}
}
void call_2(){
	string menu[3] = {"water", "coffe", "tee"};
	int prices[3] = {100, 200, 175};
	cout << menu[0] << " " << prices[0] << endl;
	cout << menu[1] <<  " " << prices[1] << endl;
	cout << menu[2] <<  " " << prices[2] << endl;
	int n;
	cin >> n;
		if (n==1) {
		total_order[ind] = menu[0];
		total_price[ind] = prices[0];
		ind ++;
			}
	else if (n == 2) {
		total_order[ind] = menu[1];
		total_price[ind] = prices[1];
		ind ++;
	}
	else if (n == 3) {
		total_order[ind] = menu[2];
		total_price[ind] = prices[2];
		ind ++;
			}
	else {
		cout << "ERR";
			call_menu();
			};
	cout << "1 - return to menu" << endl;
	cout <<  "2 - show total order" << endl;
	cin >> n;
	if (n==1) {
			call_menu();
			}
	else if (n == 2) {
		total_ord();
	}
}
void call_3(){
	string menu[3] = {"ice-cream", "cake", "puncakes"};
	int prices[3] = {100, 700, 175};
	cout << menu[0] << " " << prices[0] << endl;
	cout << menu[1] <<  " " << prices[1] << endl;
	cout << menu[2] <<  " " << prices[2] << endl;
	int n;
	cin >> n;
		if (n==1) {
		total_order[ind] = menu[0];
		total_price[ind] = prices[0];
					ind ++;

			}
	else if (n == 2) {
		total_order[ind] = menu[1];
		total_price[ind] = prices[1];
				ind ++;

			}
	else if (n == 3) {
		total_order[ind] = menu[2];
		total_price[ind] = prices[2];
				ind ++;
			}
	else {
		cout << "ERR";
			call_menu();
			};
	cout << "1 - return to menu" << endl;
	cout <<  "2 - show total order" << endl;
	cin >> n;
	if (n==1) {
			call_menu();
			}
	else if (n == 2) {
		total_ord();
	}
}
void total_ord(){
	int t = 0;
	for (int i = 0; i < ind; i++){
		cout << total_order[i] << " " << total_price[i] << endl;
		t += total_price[i];
	}
	cout << "Total: " << t << endl;
	call_menu();
}
int main() {
	call_menu();
	return 0;
}