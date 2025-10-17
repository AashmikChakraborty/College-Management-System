#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

// ---------------- Student ----------------
class Student {
public:
    string admno, name, cls, roll, address, phone, dob, father, mother, gender;

    void input() {
        cout << "Admission No: "; cin >> admno;
        cin.ignore();
        cout << "Name: "; getline(cin, name);
        cout << "Class/Branch: "; cin >> cls;
        cout << "Roll No: "; cin >> roll;
        cin.ignore();
        cout << "Address: "; getline(cin, address);
        cout << "Phone: "; cin >> phone;
        cout << "DOB: "; cin >> dob;
        cin.ignore();
        cout << "Father's Name: "; getline(cin, father);
        cout << "Mother's Name: "; getline(cin, mother);
        cout << "Gender: "; cin >> gender;
    }

    void save() {
        ifstream check("students.txt");
        bool empty = (check.peek() == EOF);
        check.close();

        ofstream f("students.txt", ios::app);
        if (empty) {
            f << left << setw(12) << "AdmNo"<< "|"
              << setw(20) << "Name"<< "|"
              << setw(15)  << "Class/Branch"<< "|"
              << setw(23)  << "Enrollment number"<< "|"
              << setw(20) << "Address"<< "|"
              << setw(12) << "Phone"  << "|"
              << setw(8) << "DOB"    << "|"
              << setw(20) << "Father" << "|"
              << setw(20) << "Mother" << "|"
              << setw(8)  << "Gender" << "|\n";
            f << string(180, '-') << "\n";
        }

        f << left << setw(12) << admno   << "|"
          << setw(20) << name    << "|"
          << setw(15)  << cls     << "|"
          << setw(23)  << roll    << "|"
          << setw(20) << address << "|"
          << setw(12) << phone   << "|"
          << setw(8) << dob     << "|"
          << setw(20) << father  << "|"
          << setw(20) << mother  << "|"
          << setw(8)  << gender  << "|\n";
        f.close();
    }
};

// ---------------- Staff ----------------
class Staff {
public:
    string empid, name, dept, salary, address, phone, account, email, gender, dob, doj;

    void input() {
        cout << "Employee ID: "; cin >> empid;
        cin.ignore();
        cout << "Name: "; getline(cin, name);
        cout << "Department: "; getline(cin, dept);
        cout << "Salary: "; cin >> salary;
        cin.ignore();
        cout << "Address: "; getline(cin, address);
        cout << "Phone: "; cin >> phone;
        cout << "Account: "; cin >> account;
        cin.ignore();
        cout << "Email: "; getline(cin, email);
        cout << "Gender: "; cin >> gender;
        cout << "DOB: "; cin >> dob;
        cout << "DOJ: "; cin >> doj;
    }

    void save() {
        ifstream check("staff.txt");
        bool empty = (check.peek() == EOF);
        check.close();

        ofstream f("staff.txt", ios::app);
        if (empty) {
            f << left << setw(12) << "EmpID"   << "|"
              << setw(20) << "Name"   << "|"
              << setw(15) << "Dept"   << "|"
              << setw(10) << "Salary" << "|"
              << setw(20) << "Address"<< "|"
              << setw(12) << "Phone"  << "|"
              << setw(15) << "Account"<< "|"
              << setw(25) << "Email"  << "|"
              << setw(8)  << "Gender" << "|"
              << setw(12) << "DOB"    << "|"
              << setw(12) << "DOJ"    << "|\n";
            f << string(180, '-') << "\n";
        }

        f << left << setw(10) << empid   << "|"
          << setw(20) << name    << "|"
          << setw(15) << dept    << "|"
          << setw(10) << salary  << "|"
          << setw(20) << address << "|"
          << setw(12) << phone   << "|"
          << setw(15) << account << "|"
          << setw(25) << email   << "|"
          << setw(8)  << gender  << "|"
          << setw(12) << dob     << "|"
          << setw(12) << doj     << "|\n";
        f.close();
    }
};

// ---------------- Fees ----------------
class Fees {
public:
    string admno, name, cls, roll, month, fees, date;

    void input() {
        cout << "Admission No: "; cin >> admno;
        cin.ignore();
        cout << "Name: "; getline(cin, name);
        cout << "Class: "; cin >> cls;
        cout << "Roll No: "; cin >> roll;
        cout << "Month: "; cin >> month;
        cout << "Fees: "; cin >> fees;
        cout << "Date: "; cin >> date;
    }

    void save() {
        ifstream check("fees.txt");
        bool empty = (check.peek() == EOF);
        check.close();

        ofstream f("fees.txt", ios::app);
        if (empty) {
            f << left << setw(12) << "AdmNo"  << "|"
              << setw(20) << "Name"  << "|"
              << setw(15)  << "Class" << "|"
              << setw(23)  << "Roll"  << "|"
              << setw(10) << "Month" << "|"
              << setw(10) << "Fees"  << "|"
              << setw(12) << "Date"  << "|\n";
            f << string(130, '-') << "\n";
        }

        f << left << setw(12) << admno  << "|"
          << setw(20) << name   << "|"
          << setw(15)  << cls    << "|"
          << setw(23)  << roll   << "|"
          << setw(10) << month  << "|"
          << setw(10) << fees   << "|"
          << setw(12) << date   << "|\n";
        f.close();
    }
};

// ---------------- Salary ----------------
class Salary {
public:
    string empid, month, status;

    void input() {
        cout << "Employee ID: "; cin >> empid;
        cout << "Month: "; cin >> month;
        cout << "Paid (Yes/No): "; cin >> status;
    }

    void save() {
        ifstream check("salary.txt");
        bool empty = (check.peek() == EOF);
        check.close();

        ofstream f("salary.txt", ios::app);
        if (empty) {
            f << left << setw(10) << "EmpID" << "|"
              << setw(10) << "Month" << "|"
              << setw(8)  << "Paid"  << "|\n";
            f << string(35, '-') << "\n";
        }

        f << left << setw(10) << empid  << "|"
          << setw(10) << month  << "|"
          << setw(8)  << status << "|\n";
        f.close();
    }
};

// ---------------- Utility Functions ----------------
void addStudent() {
Student s; s.input(); s.save(); cout << "Student Added Successfully!\n"; }
void addStaff()   { Staff st; st.input(); st.save(); cout << "Staff Added Successfully!\n"; }
void submitFees() { Fees f; f.input(); f.save(); cout << "Fees Submitted Successfully!\n"; }
void paySalary()  { Salary s; s.input(); s.save(); cout << "Salary Recorded!\n"; }

void removeStudent() {
    string adm; cout << "Enter Admission No to Remove: "; cin >> adm;
    ifstream fin("students.txt");
    ofstream fout("temp.txt");
    string line; bool found = false;

    // Always rewrite header
    fout << left << setw(12) << "AdmNo"   << "|"
         << setw(20) << "Name"   << "|"
         << setw(15)  << "Class"  << "|"
         << setw(23)  << "Roll"   << "|"
         << setw(20) << "Address"<< "|"
         << setw(12) << "Phone"  << "|"
         << setw(8) << "DOB"    << "|"
         << setw(20) << "Father" << "|"
         << setw(20) << "Mother" << "|"
         << setw(8)  << "Gender" << "|\n";
    fout << string(150, '-') << "\n";

    getline(fin, line); // skip old header
    getline(fin, line); // skip old separator
    while (getline(fin, line)) {
        if (line.find(adm) != 0) fout << line << "\n";
        else found = true;
    }
    fin.close(); fout.close();
    remove("students.txt"); rename("temp.txt", "students.txt");
    cout << (found ? "Student Removed!\n" : "Not Found!\n");
}

void removeStaff() {
    string eid; cout << "Enter Employee ID to Remove: "; cin >> eid;
    ifstream fin("staff.txt");
    ofstream fout("temp.txt");
    string line; bool found = false;

    fout << left << setw(10) << "EmpID"   << "|"
         << setw(20) << "Name"   << "|"
         << setw(15) << "Dept"   << "|"
         << setw(10) << "Salary" << "|"
         << setw(20) << "Address"<< "|"
         << setw(12) << "Phone"  << "|"
         << setw(15) << "Account"<< "|"
         << setw(25) << "Email"  << "|"
         << setw(8)  << "Gender" << "|"
         << setw(12) << "DOB"    << "|"
         << setw(12) << "DOJ"    << "|\n";
    fout << string(180, '-') << "\n";

    getline(fin, line);
    getline(fin, line);
    while (getline(fin, line)) {
        if (line.find(eid) != 0) fout << line << "\n";
        else found = true;
    }
    fin.close(); fout.close();
    remove("staff.txt"); rename("temp.txt", "staff.txt");
    cout << (found ? "Staff Removed!\n" : "Not Found!\n");
}

void searchStudent() {
    string adm; cout << "Enter Admission No: "; cin >> adm;
    ifstream fin("students.txt");
    string line; bool found = false;

    getline(fin, line);
    getline(fin, line);

    cout << left << setw(12) << "AdmNo"   << "|"
         << setw(20) << "Name"   << "|"
         << setw(15)  << "Class"  << "|"
         << setw(23)  << "Roll"   << "|"
         << setw(20) << "Address"<< "|"
         << setw(12) << "Phone"  << "|"
         << setw(12) << "DOB"    << "|"
         << setw(20) << "Father" << "|"
         << setw(20) << "Mother" << "|"
         << setw(8)  << "Gender" << "|\n";
    cout << string(150, '-') << "\n";

    while (getline(fin, line)) {
        if (line.find(adm) == 0) { cout << line << endl; found = true; }
    }
    cout << (found ? "" : "Student Not Found!\n");
}

void searchStaff() {
    string eid; cout << "Enter Employee ID: "; cin >> eid;
    ifstream fin("staff.txt");
    string line; bool found = false;

    getline(fin, line);
    getline(fin, line);

    cout << left << setw(10) << "EmpID"   << "|"
         << setw(20) << "Name"   << "|"
         << setw(15) << "Dept"   << "|"
         << setw(10) << "Salary" << "|"
         << setw(20) << "Address"<< "|"
         << setw(12) << "Phone"  << "|"
         << setw(15) << "Account"<< "|"
         << setw(25) << "Email"  << "|"
         << setw(8)  << "Gender" << "|"
         << setw(12) << "DOB"    << "|"
         << setw(12) << "DOJ"    << "|\n";
    cout << string(180, '-') << "\n";

    while (getline(fin, line)) {
        if (line.find(eid) == 0) { cout << line << endl; found = true; }
    }
    cout << (found ? "" : "Staff Not Found!\n");
}

void displayClass() {
    string cl; cout << "Enter Class: "; cin >> cl;
    ifstream fin("students.txt");
    string line;

    getline(fin, line);
    getline(fin, line);

    cout << left << setw(12) << "AdmNo"   << "|"
         << setw(20) << "Name"   << "|"
         << setw(15)  << "Class"  << "|"
         << setw(23)  << "Roll"   << "|"
         << setw(20) << "Address"<< "|"
         << setw(12) << "Phone"  << "|"
         << setw(12) << "DOB"    << "|"
         << setw(20) << "Father" << "|"
         << setw(20) << "Mother" << "|"
         << setw(8)  << "Gender" << "|\n";
    cout << string(150, '-') << "\n";

    while (getline(fin, line)) {
        if (line.find(cl) != string::npos) cout << line << endl;
    }
}

void displayAllStaff() {
    ifstream fin("staff.txt");
    string line;
    while (getline(fin, line)) cout << line << endl;
}

// ---------------- Main Menu ----------------
int main() {
    int choice;
    while (true) {
        cout << "\n====== College Management System ======\n";
        cout << "1. Add Student\n2. Remove Student\n3. Search Student\n";
        cout << "4. Add Staff\n5. Remove Staff\n6. Search Staff\n";
        cout << "7. Submit Fees\n8. Pay Salary\n";
        cout << "9. Display Class Students\n10. Display All Staff\n";
        cout << "11. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1: addStudent(); break;
        case 2: removeStudent(); break;
        case 3: searchStudent(); break;
        case 4: addStaff(); break;
        case 5: removeStaff(); break;
        case 6: searchStaff(); break;
        case 7: submitFees(); break;
        case 8: paySalary(); break;
        case 9: displayClass(); break;
        case 10: displayAllStaff(); break;
        case 11: cout << "Exiting...\n"; return 0;
        default: cout << "Invalid choice!\n";
        }
    }
}

