//module4.h
# include <iostream>
# include <cstdlib>

using namespace std;

class module4
  {
     public:
	int from,aux,to,n;
        int count;
	void tower();
	void hanoi(int n,int from,int aux,int to);

	void matrix();
	int a[100][100];
	int used[100][100];
	int middler[100];
	int middlec[100];
	//int size;

	void fillmiddle(int rstart,int rend,int cstart,int cend);
	void divide(int rstart,int rend,int cstart,int cend);
	void filldiagonal(int rs,int re,int cs,int ce);
	int check(int rs,int re,int cs,int ce);
	int find(int middler[100],int middlec[100],int r,int c);
	void filldiagonal1(int rstart,int rend,int cstart,int cend,int index1,int index2);
	void filldiagonal2(int rstart,int rend,int cstart,int cend,int index1,int index2);
	void filldiagonal3(int rstart,int rend,int cstart,int cend,int index1,int index2);
	void filldiagonal4(int rstart,int rend,int cstart,int cend,int index1,int index2);
	void fill(int rs,int re,int cs,int ce);
	void fillother(int rstart,int rend,int cstart,int cend);
	void display();
	int count_triomino(int size);
	void display1();
	void display3();

	void steps();
	int size;//size here refers to the number of steps in the ladder
	void ladder_path(int size);
	void print_ladder_path(char data[],int i,int size);

	void circus();
	int h[100],w[100];
	int h1[100],w1[100];
	int h2[100],w2[100];
	//int size;
	void sort_h(int h1[100],int w1[100],int size);
	void sort_w(int h2[100],int w2[100],int size);
  };
