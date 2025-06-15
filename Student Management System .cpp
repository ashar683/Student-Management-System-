/*Project: Student Management System
Description:
Develop a student management system for
educational institutions to manage student
records, courses, grades, and attendance.
Implement classes for students, courses,
grades, and attendance records. Utilize
concepts such as constructors, member
functions, access modifiers, and function
overloading.*/

#include <iostream>
using namespace std;

class Student_management_system {
protected:
    		int id = 2161;
    		string name[15] = {"Umar Sarwar", "Muhammad Wamiq", "Zain Shahid", "Ashar Ashfaq", "Awais Ishfaq",
                       "Muhammad Umair", "Nadir Abbas", "Rabia Arshad", "Atkah Zubair", "Aqsa Aslam",
                       "Sadia Nadeem", "Kisa E Zahra", "Hassan Raza", "Hamza Farooq", "Tanveer Ahmad"};

public:
    void display(int i) {
        	cout << "Your RegNo is = " << id + i << ",\tYour Name is = " << name[i] << endl;
    }
};

class Course : public Student_management_system {
protected:
    		string course_code[7] = {"GE-305", "CS-304", "GE-403", "GE-307", "CS-312" , "MA-314", "QS-302"};
    		string credit_hour[7] = {"3(3-0)", "4(3-1)", "        3(3-0)", "                2(2-0)", "        3(2-1)", "        3(3-0)", "                1(1-0)"};
    		string course_title[7] = {"Quantitative Reasoning-1", "Object Oriented Programming", "Expository Writing",
                              "Islamic Studies", "Digital Logic Design", "Elementary Mathematics", "Quranic Studies"};
    		string instructor[7] = {"Mr. Ishtaq", "Mr. Nadeem", "Ms. Tania Latif", "Ms. Mairaj Zahra",
                            "Ms. Asma Rehman", "Ms. Adeela Manzoor", "Ms. Noreen Shahzadi"};

public:
    void course_display() {
        	cout << "\nCourse Code\tCourse Title\t\t\tCredit Hours\tInstructor\n";
			cout << "---------------------------------------------------------------\n";
        for (int i = 0; i < 7; i++) {
            cout << course_code[i] << "\t" << course_title[i] << "\t\t" << credit_hour[i] << "\t" << instructor[i] << endl;
        }
    }
};

class Grade : public Course {
public:
    void input_grades() {
        	char grades[7];
        for (int i = 0; i < 7; i++) {
            cout << "Enter the Grade for subject " << course_title[i] << "= ";
            cin >> grades[i];
        }
        	cout<<endl;
        	cout <<"Grades = \n";
        for (int i = 0; i < 7; i++) {
            cout << course_title[i] << "= " << grades[i] << endl;
        }
    }
};
class Attendance:public Grade{
	public:
		void attendance( ){
			int a[10];
		for(int i =0; i<10;i++){
			cout<<"Enter 1 for present or 0 for Absent = ";
			cin>>a[i];
	}
			int count=0;
			int step=0;
			float percentage;
		for(int i=0;i<10;i++){
	      if(a[i]>0){
		  	count++;
	}
		else {
			step++;
	}
}
			percentage=count*100;
			percentage=percentage/10;
	    	cout<<endl;
			cout<<"Your Tottal Percentage is = "<<percentage<<"%"<<endl;
		if(percentage>=70){
			cout<<"you are able to sit in the exams.";
}
		else
			cout<<"your are not be able to sit in the exams.";

}
};

class show:public Attendance{
	protected:
			int x;
			int y;
			string name;
			string nam[50];
			int roll;
			int rol[50];
			int a;
			string subject[50];
			string sub[50];
			char grade;
			char grd[50];
	public:
		void showw(){
		    cout << "\n========== New Student==========\n";
            cout << "How many students do you want to add? =";
            cin >> x;
            cin.ignore();
		    for(int i =0; i<x;i++){
			cout<<"Enter your Name = ";
			getline(cin, name);
			nam[i]=name;
			cout<<"Enter your RegNo = ";
			cin>>roll;
			rol[i]=roll;
		}
			cout<<"How many subject do you want to study = ";
			cin>>a;
			for(int i=0+1;i<=a;i++){
				cout<<"Enter your "<<i<<" Subject name = "<<endl;
				cin>>subject[i];
				sub[i]=subject[i];
				cout<<"Enter your grade in this subject = ";
				cin>>grade;
				grd[i]=grade;
			}
			for(int i =0;i<x;i++){
			    cout << "\n========== Summary ==========\n";
				cout<<"Your name is = "<<nam[i]<<endl;
				cout<<"Your roll number is = "<<rol[i]<<endl;
			}
			for(int i =0+1; i<=a;i++){
				cout<<"Your "<< i <<" Subject is = "<<sub[i]<<endl;
				cout<<"Your "<< i <<" Subject grade is = "<<grd[i]<<endl;
			}
	}
};

class Expose:public show{
	public:
			void expose() {
    			int num;
    			bool found = false;

    			cout << "Enter the roll number of student = ";
    			cin >> num;

				int percentage[15] = {70, 75, 92, 95, 97, 86 , 99, 89, 77, 79, 88, 67, 90, 100, 77};
    			int Id[15] = {2161, 2162, 2163, 2164, 2165, 2166, 2167, 2168, 2169, 2170, 2171, 2172, 2173, 2174, 2175};
    			string namee[15] = {"Umar Sarwar", "Muhammad Wamiq", "Zain Shahid", "Ashar Ashfaq", "Awais Ishfaq",
                        "Muhammad Umair", "Nadir Abbas", "Rabia Arshad", "Atkah Zubair", "Aqsa Aslam",
                        "Sadia Nadeem", "Kisa E Zahra", "Hassan Raza", "Hamza Farooq", "Tanveer Ahmad"};
                        
   		for (int i = 0; i < 15; i++) {
        	if (num == Id[i]) {
            found = true;
            	cout << "\nYour RegNo is = " << Id[i] << ", Your Name is = " << namee[i] << endl;
            	cout << "Your Attendance percentage is = " << percentage[i] << "%\n";
            	cout<<"You are Able to sit in the exam "<<"\n\n";
            	cout << "Course Code\tCourse Title\t\t\tCredit Hours\tInstructor\n";
        for (int j = 0; j < 7; j++) {
                cout << course_code[j] << "\t" << course_title[j] << "\t\t" << credit_hour[j] << "\t" << instructor[j] << endl;
            }
            cout << "\nGrades = \n";
            if (i % 2 == 0) {
                cout << "Quantitative Reasoning-1 : A\n";
                cout << "Object Oriented Programming : C\n";
                cout << "Expository Writing : B\n";
                cout << "Islamic Studies : B\n";
                cout << "Digital Logic Design : A\n";
                cout << "Elementary Mathematics : A\n";
                cout << "Quranic Studies : C\n";
                cout << "Overall Grade: B+\n";
            } 
			else {
                cout << "Quantitative Reasoning-1 : B\n";
                cout << "Object Oriented Programming : A\n";
                cout << "Expository Writing : C\n";
                cout << "Islamic Studies : B\n";
                cout << "Digital Logic Design : D\n";
                cout << "Elementary Mathematics : C\n";
                cout << "Quranic Studies : A\n";
                cout << "Overall Grade: B\n";
            }
            	break;
        }
    }
            if (!found) {
       			cout << "No student found with RegNo = " << num << endl;
    }
}
};

int main() 
          {
          	int choice;          	
	menu:	
	cout << "1. Show details of all students\n";
    cout << "2. Show details of a single student\n";
    cout << "3. Add a new student\n";
    cout << "Enter your choice (1-3)= ";
	cin>>choice;
	switch(choice){
		
		   case 1:{
    			Attendance obj;
   				for (int i = 0; i < 15; i++) {
        			cout << "\n========================================================\n";
        			cout << "Student #" << i + 1 << "\n";
       				cout << "--------------------------------------------------------\n";
        			obj.display(i);         
        			obj.course_display();
        			cout<<endl;
       				obj.input_grades();
        			cout<<endl;
        			obj.attendance();
    }
    				break;
}
    		case 2:{
    				Expose dis;
    				cout<<endl;
 		        	dis.expose();
					break;
		}		        
		case 3:
				{
					show sh;
					sh.showw();
					break;
				}
		default:
			        cout<<endl;
					cout<<"please enter the key from 1 to 3";
					cout<<endl;
					goto menu;
	}


	return 0;
}