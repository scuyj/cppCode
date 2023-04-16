#include <iostream>
#include <string.h>
#include <string>
using namespace std;

class Student{
public:
    double mid_grade, fin_grade;

    double total_grade;

    char* name;

    void dealInfo(char* n, int mg, int fg)
    {

        mid_grade = mg;
        fin_grade = fg;

        this->name = n;

        total_grade = 0.4 * mid_grade + 0.6 * fin_grade;
    }

	//输出名字 
    void showName()
    {
        //printf("%s",name);
        cout << name;
    }
	//输出期中成绩 
    double showMidGrade()
    {
        return mid_grade;
    }
    
    //输出期末成绩 
    double showFinGrade()
    {
        return fin_grade;
    }
    
    //输出总成绩 
    double showTotalGrade()
    {
        return total_grade;
    }
};

//排名 
void Sort(Student stu[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (stu[i].total_grade < stu[j].total_grade)
            {
            	//交换名字 
                char* temp_name;
                temp_name = stu[i].name;
                stu[i].name = stu[j].name;
                stu[j].name = temp_name;
				
				//交换成绩 
                int temp_grade;
                temp_grade = stu[i].mid_grade;
                stu[i].mid_grade = stu[j].mid_grade;
                stu[j].mid_grade = temp_grade;

                temp_grade = stu[i].fin_grade;
                stu[i].fin_grade = stu[j].fin_grade;
                stu[j].fin_grade = temp_grade;

                temp_grade = stu[i].total_grade;
                stu[i].total_grade = stu[j].total_grade;
                stu[j].total_grade = temp_grade;
            }
        }
    }
}


int main()
{
    Student stu[32];
    char name[30][20];
    int mg, fg;//期中期末成绩 


    int i = 0;
    
     
    while (scanf("%s %d %d", name[i], &mg, &fg) != EOF)
    {
        char* name1 = name[i];
        stu[i].dealInfo(name1, mg, fg);
        i++;
    }

    Sort(stu, i);

    for (int j = 0; j < i; j++)
    {
        stu[j].showName();
        printf(" %.2f %.2f %.2f", stu[j].showMidGrade(), stu[j].showFinGrade(), stu[j].showTotalGrade());

        printf("\n");
    }

    return 0;
}
