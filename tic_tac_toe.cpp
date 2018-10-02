#include<iostream>
using namespace std;

int main()
{
	char str[3][3] , win='t';
	int i,j,chance=1,n=0;
	cout<<"\n LET'S PLAYYY!!!";
	while(n<9){
		if(chance%2!=0)
		{
			cout<<"O's Chance...ENTER!!";
			cin>>i; cin>>j;
			str[i][j]='O';
			n++;
			chance++;
		}
		else{
			cout<<"X's Chance...ENTER!!";
			cin>>i; cin>>j;
			str[i][j]='X';
			n++;
			chance++;
		}
		if(n>=5)
		{
			for(i=0;i<2;i++){
				j=0;
				while(str[i][j]==str[i][j+1] && j<2){
					j++;
				}
				if(j==2){
					win=str[i][j];
					break;
				}
			}
			for(j=0;j<2;j++){
				i=0;
				while(str[i][j]==str[i+1][j] && i<2){
					i++;
				}
				if(i==2){
					win=str[i][j];
					break;
				}
			}
			if(win=='t')
			{
				if(str[0][0]==str[1][1] && str[1][1]==str[2][2]){
					win=str[2][2];
				}
				else if(str[0][2]==str[1][1] && str[1][1]==str[2][0]){
					win=str[1][1];
				}
			}
			if(win=='O' || win=='X'){
				cout<<"\n\tWinner is : "<<win;
				break;
			}
			else if(n==9){
				cout<<"\n\tGame tied!!!";
			}
		}
	}
	return 0;
}
