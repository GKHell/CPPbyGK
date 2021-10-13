

#include<iostream>
using namespace std;

class Matrix{
	int n,m;
	int i,j;
	int matrix[10][10]; // 10x10 matrix

public:
	Matrix()
	{
		// code
	}
	Matrix(int row,int column)
	{
		n = row;
		m = column;
	}

	void set_matrix()
	{
		cout<<"\nEnter the Matrix [ "<<n<<"x"<<m<<" ]: \n";
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
			{
				cin>>matrix[i][j];
			}
	}

	void show_matrix()
	{
		cout<<"  Matrix ---- \n";

		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cout<<" "<<matrix[i][j]<<"\t";
			}
			cout<<endl;
		}
	}

	Matrix operator + (Matrix m2)
	{
		Matrix temp(n,m);
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
			{
				temp.matrix[i][j] = this->matrix[i][j] + m2.matrix[i][j];
			}

			return temp;
	}

	Matrix operator - (Matrix m2)
	{
		Matrix temp(n,m);
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
			{
				temp.matrix[i][j] = this->matrix[i][j] - m2.matrix[i][j];
			}

			return temp;
	}
};
int main()
{

	
	Matrix m1(3,3);
	Matrix m2(3,3);

	m1.set_matrix();
	m2.set_matrix();

	// cout<<"\n ------ M1 ------- \n";
	// 	m1.show_matrix();
	
	// cout<<"\n ------ M1 ------- \n";
	// 	m1.show_matrix();

	/////////////// ----- SUM	
	Matrix sum = m1+m2;
	cout<<"\n ------ SUM ------- \n";
		sum.show_matrix();

	////////////// ----- SUB
	Matrix sub = m1-m2;
	cout<<"\n ------ SUB ------- \n";
		sub.show_matrix();


}