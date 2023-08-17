#include <iostream>

using namespace std;
class University{
private:
    University{};
   // vector<Department>
   vector<Course> courses;
   //vector<Student> students;
    static University *ptr;
public:
    University(const University& obj) = delete; // Copy Constructor with attributes as delete
     static University *ptr(){
        if(ptr == NULL){
            ptr = new University();
            return ptr;
        }
        else{
            return ptr;
        }
    }
    void addCourse (string n, float h, string c, string p, Student s,Course pre){
        if(n != "" && h != 0.0 && c != "" && p != ""){
        Course c(n,h,c,p,s,pre);
        courses.push_back(c);

        }
    }
    bool updateCourse(float courseHours, string courseCode){
       /* auto x = search (courses.begin(), courses.end(), courseCode);
        if(x != courses.end()){
            courses.setCourseHours(courseHours);
        }
    }*/

    // Declaring an iterator
   /* vector<int>::iterator i;
    for(i =courses.begin(); i != courses.end();i++){
        if(courses.getCourseCode() == courseCode){
             courses.setCourseHours(courseHours);
        }*/
        for(int i=0; i<courses.size();i++){
        if(courses.getCourseCode() == courseCode){
            courses.setCourseHours(courseHours);
        }
    }

    }


    bool deleteCourse (string courseCode){

    for(int i=0; i<courses.size();i++){
        if(courses.getCourseCode() == courseCode){
            courses.erase(i);
        }
    }
   /* vector<int>::iterator i;
    for(i =courses.begin(); i != courses.end();i++){
        if(courses.getCourseCode() == courseCode){
             courses.erase();
        }
    }
    /*auto x = search (courses.begin(), courses.end(), courseCode);
        if(x != courses.end()){
            courses.setCourseHours(courseHours);
        }*/

};
University* University::ptr = NULL;
class Course{
private:
    string  courseName;
    float courseHours; //update
    string courseCode;
    string professor; //instructor name
    vector <Course> prerequisites;
   vector<Student> students; //registered students at the course
public:
    Course(){}; //default constructor
    Course(string n, float h, string c, string p, Student s,Course pre){ //parameterized constructor
         courseName = n;
        courseHours = h;
        courseCode = c;
        professor = p;
        students.push_back(s);  // Constructor to initialize the vector
        prerequisites.push_back(pre);  // Constructor to initialize the vector

    }
   // setters & getters
    void setName(string n){
        courseName = n;
    }
    string getName(){
        return  courseName;
    }
    void setCourseHours(float h){
        courseHours = h;
    }
    float getCourseHours(){
        return courseHours;
    }
    void setCourseCode(string c){
        courseCode = c;
    }
    string getCourseCode(){
        return courseCode;
    }
    void setProf(string p){
        professor = p;
    }
    string getProf (){
        return professor;
    }
};


// Definition of the static vector global
vector<Student> Course::students;


int main()
{
  //Student s1(0,1);
  //vector<Course> prerequest = new Course;
 // Course c1("Math1",2.30,"EM","Ali",s1,prerequest);
    return 0;
}
