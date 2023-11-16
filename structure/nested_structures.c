#include <stdio.h>

// Separate Structs
struct PersonalInfo {
    char name[50];
    int phone;
};

struct StructStudent{
    int marks;
    float attendance;
    struct PersonalInfo details;
};

// Embedded structs
struct StructStudentEmbedded {
    int marks;
    float attendance;
    struct PersonalInfoEmbedded {
        char name[50];
        int phone;
    } details;
};


int main() {
    struct StructStudent student = {78, .90, {"Ashutosh", 53534534}};
    struct StructStudent *ptr = &student;
    printf("Marks: %d\nAttendance: %f\nDetails:\nName:%s, Phone: %d\n\n", ptr->marks, ptr->attendance, ptr->details.name, ptr->details.phone);
    printf("Marks: %d\nAttendance: %f\nDetails:\nName:%s, Phone: %d\n", student.marks, student.attendance ,student.details.name, student.details.phone);
}
