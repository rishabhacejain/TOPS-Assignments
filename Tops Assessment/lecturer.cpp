ā




/* #include<iostream>
using namespace std;
class lecture{
    private:
    string lecturer_name;
    string subject_name;
    string course_name;
    int num_lectures;

    public:
    lecture(string name, string subject,string course,int num){
        lecturer_name = name;
        subject_name = subject;
        course_name = course;
        num_lectures = num;
    }    
void displayDetails() {
        cout << "Lecturer Name: " << lecturer_name << endl;
        cout << "Subject Name: " << subject_name << endl;
        cout << "Course Name: " << course_name << endl;
        cout << "Number of Lecturers: " << num_lectures << endl;
    }
};
int main() {
    // Array to store details of 5 lecturers
    lecture lecturers[5] = {
        lecture("Anjana ladd", "Computer Science", "Programming", 3),
        lecture("Vinod Singh", "Mathematics", "Algebra", 2),
        lecture("Pradeep Sharma", "Physics", "Mechanics", 4),
        lecture("Deepa Mittal", "History", "World Wars", 5),
        lecture("Pranati Singh", "Biology", "Genetics", 3)
    };

    // Display details of each lecturer
    cout << "Lecture Details:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Lecture " << i + 1 << ":" << endl;
        lecturers[i].displayDetails();
        cout << endl;
    }

    return 0;
} */