#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H

#include <string>
#include <vector>


using namespace std;

namespace grade_school {

    struct student_t
    {
        string name;
        int age;
    };

    class school
    {
    public:
        school() {};
        vector<student_t> roster();
        // void add(student_t student);
        // school grade(int);
        // protected:
    private:
        vector<student_t> students;
    };
}  // namespace grade_school

#endif // GRADE_SCHOOL_H