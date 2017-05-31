//Sayeed Gulmahamad
#include <iostream>
using namespace std;
int main() {

int b[8][8]={0},r,c=0,i;
	b[0][0]=1;
	NC: c++;

	if (c==8) goto print;

   r=-1;
   NR: r++;
	if (r==8) goto backtrack;

   //RowTest
   for(i=0; i<c; i++)
	if(b[r][i] ==1) goto NR;

   //UpDiagonalTest
   for(i=1; (r-i) > -1 && (c-i) > -1; i++)
	if(b[r-i][c-i]==1) goto NR;
   
   //DownDiagonalTest
   for(i=1; (r+i) < 8 && (c-i) > -1; i++)
	if(b[r+1][c-i]==1) goto NR;

   b[r][c]=1;
   goto NC;

   backtrack: c--;
	if(c==-1) return 0;
	r=0;
	while (b[r][c] !=1)
	   r++;
	b[r][c]=0;
	goto NR;
   print: for ( int i=0; i<8; i++){
		for(int j=0; j<8; j++)  {
		cout << b[i][j] ;

}


cout << endl;
}
	goto backtrack;




return 0;

}
