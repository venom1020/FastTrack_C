struct student {
int rollNo;
char name[20];
int age;
int marks[5];
};
typedef struct student stud;

stud* allocateMem(int);
void display(stud*);
void accept(int,stud*);
void searchByroll(int,stud*);
void searchByname(int,stud*);
void highestMarks(int,stud*);
void displayNameswithA(int,stud*);
