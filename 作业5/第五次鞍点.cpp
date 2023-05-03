#include <iostream>

using namespace std;

class anDian {
private:
	int n;
	int matrix[100][100];
	int row, line;
public:
	anDian(int n)
	{
		this->n = n;
		row = -1;
		line = -1;
	}

	void creatMatrix()
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				scanf("%d", &matrix[i][j]);
			}
			
		}
	}
	void judge()
	{
		int rowmax[100] = { -1 };
		int linemin[100] = { -1 };
		for (int i = 0; i < n; i++)
		{
			rowmax[i] = 0;

			for (int j = 0; j < n; j++)
			{			
				if (matrix[i][rowmax[i]] < matrix[i][j])
				{
					rowmax[i] = j;
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			linemin[i] = 0;
			for (int j = 0; j < n; j++)
			{
				if (matrix[linemin[i]][rowmax[i]] > matrix[j][rowmax[i]])
				{
					linemin[i] = j;
				}
			}

			if (linemin[i] == i)
			{
				row = linemin[i];
				line = rowmax[i];
			}
		}
		
	}

	void showRes()
	{
		if (row == -1 && line == -1)
		{
			cout << "NO" << endl;
		}
		else
			cout << row << " " << line << endl;
	}
};

int main()
{
	int n;
	scanf("%d", &n);

	anDian matrix1(n);
	matrix1.creatMatrix();
	matrix1.judge();
	matrix1.showRes();
}
