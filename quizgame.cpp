//zain

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const char correctuser[] = "user123";
    const char correctpass[] = "pass456";

    char enteruser[50];
    char enterpass[50];

    bool login = false;

    do {
        cout << "Login\n";
        cout << "Enter your username: ";
        cin >> enteruser;

        if (strcmp(enteruser, correctuser) == 0) {
            cout << "Enter your password: ";
            cin >> enterpass;

            if (strcmp(enterpass, correctpass) == 0) {
                cout << "Login successful. Welcome, " << enteruser << "!\n";
                login = true;
            } else {
                cout << "Incorrect password. Please try again.\n";
            }
        } else {
            cout << "Incorrect username. Please try again.\n";
        }

    } while (!login);

    const int mark_each = 10; 
    const int total_marks = 40;      

    char choice;
    int totalMarks = 0;
    int total_Q = 0;

    do {
        cout << "M for Math." << endl;
        cout << "E for English." << endl;
        cout << "P for Physics." << endl;
        cout << "S for Pakistan Studies." << endl;
        cout << "Q to Quit." << endl;
        cout << "Choose your subject (or Q to quit): ";
        cin >> choice;

        int subjectMarks = 0;

        switch (choice) {
            case 'M':
            case 'm':
                cout << "**********   Welcome to Mathematics test   **********" << endl;
                char ans;
            do {
        cout << "Q#1: Solve this equation: 24/2*3-6=?" << endl;
        cout << "(a) 32 " << endl;
        cout << "(b) 30 " << endl;
        cout << "(c) 31 " << endl;
        cout << "Enter Answer: ";
        cin >> ans;
        if (ans == 'a' || ans == 'A' || ans == 'b' || ans == 'B' || ans == 'c' || ans == 'C') {
            if (ans == 'b' || ans == 'B') {
                cout << "Correct Answer" << endl;
                subjectMarks++;
            } else {
                cout << "Incorrect Answer." << endl;
                cout << "Correct answer is 30." << endl;
            }
        } else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }

    } while (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C');

			do{
                cout << "Q#2: Solve this equation: 24/3-6=?" << endl;
                cout << "(a) 2 " << endl;
                cout << "(b) 0 " << endl;
                cout << "(c) 1 " << endl;
                cout << "Enter Answer: ";
                cin >> ans;
                if (ans == 'a' || ans == 'A' || ans == 'b' || ans == 'B' || ans == 'c' || ans == 'C') {
                if (ans == 'a' || ans == 'A') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is 2." << endl;
                }
				}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C');

do{
                cout << "Q#3: Solve this equation : x-25=5 : The value of x is :" << endl;
                cout << "(a) 23 " << endl;
                cout << "(b) 20 " << endl;
                cout << "(c) 30 " << endl;
                cout << "Enter Answer: ";
                cin >> ans;
                if (ans == 'a' || ans == 'A' || ans == 'b' || ans == 'B' || ans == 'c' || ans == 'C') {
                if (ans == 'c' || ans == 'C') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;}
                else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is 30." << endl;
                }}
				else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C');
                
                do{
                cout<<"Q#4: Solve this equation : a^2 - b^2=?  "<<endl;
			    cout<<"(a) (a-b)(a+b) "<<endl;
			    cout<<"(b) (a-b)(a-b) "<<endl;
			    cout<<"(c) (a+b)(a+b) "<<endl;
			    cout<<"Enter Answer: "<<endl;
                cin >> ans;
                if (ans == 'a' || ans == 'A' || ans == 'b' || ans == 'B' || ans == 'c' || ans == 'C') {
                if (ans == 'a' || ans == 'A') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is (a-b)(a+b)." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C');
                
                do{
				cout<<"Q#5: The order of matrix [2 1] is �   "<<endl;
				cout<<"(a) 2-by-1 "<<endl;
				cout<<"(b) 1-by-2  "<<endl;
		        cout<<"(c) 1-by-1  "<<endl;
				cout<<"Enter Answer: "<<endl;
                cin >> ans;
                if (ans == 'a' || ans == 'A' || ans == 'b' || ans == 'B' || ans == 'c' || ans == 'C') {
                if (ans == 'b' || ans == 'B') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is 1-by-2 ." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C');
                
                do{
                cout<<"Q#6: Which is order of a square matrix?  "<<endl;
			    cout<<"(a) 2-by-2 "<<endl;
		        cout<<"(b) 1-by-2  "<<endl;
		        cout<<"(c) 2-by-1  "<<endl;
		        cout<<"Enter Answer: "<<endl;
                cin >> ans;
                if (ans == 'a' || ans == 'A' || ans == 'b' || ans == 'B' || ans == 'c' || ans == 'C') {
                if (ans == 'a' || ans == 'A') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is 2-by-2." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C');
                
                do{
				
                cout<<"Q#7: A square matrix A is called singular if: "<<endl;
			    cout<<"(a) |A|!= 0 "<<endl;
		        cout<<"(b) |A|= 0  "<<endl;
		        cout<<"(c) |A|=1  "<<endl;
		        cout<<"Enter Answer: "<<endl;
                cin >> ans;
                if (ans == 'a' || ans == 'A' || ans == 'b' || ans == 'B' || ans == 'c' || ans == 'C') {
                if (ans == 'b' || ans == 'B') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is |A|= 0." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C');
                
				do{
				cout<<"Q#8: P/q is a/an���.number.  "<<endl;
			    cout<<"(a) irrational "<<endl;
		        cout<<"(b) rational  "<<endl;
		        cout<<"(c) natural "<<endl;
		        cout<<"Enter Answer: "<<endl;
                cin >> ans;
                if (ans == 'a' || ans == 'A' || ans == 'b' || ans == 'B' || ans == 'c' || ans == 'C') {
                if (ans == 'a' || ans == 'A') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is irrational." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C');
                
                do{
                cout<<"Q#9: . In �2+3i, 3 is called ?  "<<endl;
			    cout<<"(a) imaginary part "<<endl;
			    cout<<"(b) real part  "<<endl;
			    cout<<"(c) complex number  "<<endl;
		        cout<<"Enter Answer: "<<endl;
			         cin >> ans;
			         if (ans == 'a' || ans == 'A' || ans == 'b' || ans == 'B' || ans == 'c' || ans == 'C') {
                if (ans == 'a' || ans == 'A') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is imaginary part." << endl;
            	}}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C');
            	
            	do{
                cout<<"Q#10: The logarithm of any number to itself as base is:  "<<endl;
		        cout<<"(a) 1 "<<endl;
   		        cout<<"(b) -1  "<<endl;
		        cout<<"(c) 0 "<<endl;
		        cout<<"Enter Answer: "<<endl;
                cin >> ans;
                if (ans == 'a' || ans == 'A' || ans == 'b' || ans == 'B' || ans == 'c' || ans == 'C') {
                if (ans == 'a' || ans == 'A') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is 1." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C');
                
                break;

            case 'S':
            case 's':
                cout << "**********   Welcome to Pakistan Studies test   **********" << endl;
                char an;
                do{
                cout << "Q#1: When was the first session of the first Constituent Assembly of Pakistan held?" << endl;
                cout << "(a) 11 Aug 1947 " << endl;
                cout << "(b) 10 Aug 1947 " << endl;
                cout << "(c) 9 Aug 1947 " << endl;
                cout << "Enter Answer: ";
                cin >> an;
                if (an == 'a' || an == 'A' || an == 'b' || an == 'B' || an == 'c' || an == 'C') {
                if (an == 'b' || an == 'B') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is 10 Aug 1947." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (an != 'a' && an != 'A' && an != 'b' && an != 'B' && an != 'c' && an != 'C');
                
                do{
                cout<<"Q#2: How many seats did the first constituent assembly of Pakistan have? "<<endl;
		        cout<<"(a) 69 "<<endl;
	   	        cout<<"(b) 67 "<<endl;
		        cout<<"(c) 68 "<<endl;
		        cout<<"Enter Answer: "<<endl;
                cout << "Enter Answer: ";
                cin >> an;
                if (ans == 'a' || an == 'A' || an == 'b' || an == 'B' || an == 'c' || an == 'C') {
                if (an == 'a' || an == 'A') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is 69." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (an != 'a' && an != 'A' && an != 'b' && an != 'B' && an != 'c' && an != 'C');
                
                do{
                cout<<"Q#3: Who was the last viceroy of India? "<<endl;
			    cout<<"(a) Lord Mountbatten "<<endl;
		        cout<<"(b) Lord Wavell "<<endl;
		        cout<<"(c) Lord Willington "<<endl;
		        cout<<"Enter anwer: "<<endl; 
                cin >> an;
                if (an == 'a' || an == 'A' || an == 'b' || an == 'B' || an == 'c' || an == 'C') {
                if (an == 'a' || an == 'A') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is Lord Mountbatten." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (an != 'a' && an != 'A' && an != 'b' && an != 'B' && an != 'c' && an != 'C');
                
                do{
                cout<<"Q#4: In terms of population, Pakistan's position in the world is:" <<endl;
	  	        cout<<"(a) 7th "<<endl;
			    cout<<"(b) 6th "<<endl;
		        cout<<"(c) 5th "<<endl;
                cout << "Enter Answer: ";
                cin >> an;
                if (an == 'a' || an == 'A' || an == 'b' || an == 'B' || an == 'c' || an == 'C') {
                if (an == 'c' || an == 'C') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is 5th." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (an != 'a' && an != 'A' && an != 'b' && an != 'B' && an != 'c' && an != 'C');
        
        do{
            	cout<<"Q#5: Pakistans population is what percent of the worlds population"<<endl;
		    	cout<<"(a) 2.4% "<<endl;
		    	cout<<"(b) 2.8% "<<endl;
		    	cout<<"(c) 2.62% "<<endl;
            	cout << "Enter Answer: ";
            	cin >> an;
            	if (an == 'a' || an == 'A' || an == 'b' || an == 'B' || an == 'c' || an == 'C') {
            	if (an == 'b' || an == 'B') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is 2.8%." << endl;
                }}else {
                	
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (an != 'a' && an != 'A' && an != 'b' && an != 'B' && an != 'c' && an != 'C');
                
                do{
                cout<<"Q#6: Karachi is among the top _____ populous cities of the world. "<<endl;
			    cout<<"(a) 7 "<<endl;
			    cout<<"(b) 20 "<<endl;
			    cout<<"(c) 21 "<<endl;
                cout << "Enter Answer: ";
                cin >> an;
                if (an == 'a' || an == 'A' || an == 'b' || an == 'B' || an == 'c' || an == 'C') {
                if (an == 'b' || an == 'B') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is 20." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (an != 'a' && an != 'A' && an != 'b' && an != 'B' && an != 'c' && an != 'C');
        
        
        do{     
                cout<<"Q#7: First constitution of Pakistan 1956 was promulgated on: "<<endl;
			    cout<<"(a) 23 june 1956 "<<endl;
				cout<<"(b) 27 Mar 1956 "<<endl;
			    cout<<"(c) 23 Mar 1956 "<<endl;
                cout << "Enter Answer: ";
                cin >> an;
                if (an == 'a' || an == 'A' || an == 'b' || an == 'B' || an == 'c' || an == 'C') {
                if (an == 'c' || an == 'C') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is 23 March 1956." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (an != 'a' && an != 'A' && an != 'b' && an != 'B' && an != 'c' && an != 'C');
                
                do{
                cout<<"Q#8: The Constitution of 1956 was: "<<endl;
			    cout<<"(a) Unicameral "<<endl;
		        cout<<"(b) Bicameral "<<endl;
		        cout<<"(c) Presidential "<<endl;
                cout << "Enter Answer: ";
                cin >> an;
                if (an == 'a' || an == 'A' || an == 'b' || an == 'B' || an == 'c' || an == 'C') {
                if (an == 'a' || an == 'A') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is unicameral." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (an != 'a' && an != 'A' && an != 'b' && an != 'B' && an != 'c' && an != 'C');
                
                do{
                cout<<"Q#9: According to which constitution Pakistan became an Islamic Republic? "<<endl;
			    cout<<"(a) 1973 "<<endl;
			    cout<<"(b) 1962 "<<endl;
			    cout<<"(c) 1956 "<<endl;
                cout << "Enter Answer: ";
                cin >> an;
                if (an == 'a' || an == 'A' || an == 'b' || an == 'B' || an == 'c' || an == 'C') {
                if (an == 'c' || an == 'C') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is 1956." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (an != 'a' && an != 'A' && an != 'b' && an != 'B' && an != 'c' && an != 'C');
                
                do{
                cout<<"Q#10: According to the Constitution of 1956, the national language of Pakistan was: "<<endl;
			    cout<<"(a) Urdu "<<endl;
			    cout<<"(b) Bengal "<<endl;
			    cout<<"(c) Urdu & Bengal "<<endl;
                cout << "Enter Answer: ";
                cin >> an;
                if (an == 'a' || an == 'A' || an == 'b' || an == 'B' || an == 'c' || an == 'C') {
                if (an == 'c' || an == 'C') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is Urdu & Bengal." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (an != 'a' && an != 'A' && an != 'b' && an != 'B' && an != 'c' && an != 'C');
                
                break;

            case 'E':
            case 'e':
                cout << "**********   Welcome to English test   **********" << endl;
                char as;
                
                do{
                cout << "Q#1: Choose the word with correct spelling" << endl;
                cout << "(a) Sowereignty " << endl;
                cout << "(b) Sovereignti " << endl;
                cout << "(c) Sovereignty " << endl;
                cout << "Enter Answer: ";
                cin >> as;
                if (as == 'a' || as == 'A' || as == 'b' || as == 'B' || as == 'c' || as == 'C') {
                if (as == 'c' || as == 'C') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is Sovereignty." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (as != 'a' && as != 'A' && as != 'b' && as != 'B' && as != 'c' && as != 'C');
                
                do{
                cout<<"Q#2: Choose the word with correct spelling "<<endl;
    			cout<<"(a) sustem "<<endl;
       			cout<<"(b) system "<<endl;
        		cout<<"(c) sistem "<<endl;
                cout << "Enter Answer: ";
                cin >> as;
                if (as == 'a' || as == 'A' || as == 'b' || as == 'B' || as == 'c' || as == 'C') {
                if (as == 'b' || as == 'B') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is System." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (as != 'a' && as != 'A' && as != 'b' && as != 'B' && as != 'c' && as != 'C');
                
                do{
                cout<<"Q#3: Allama iqbal had a great role in Muslim ............ movement. "<<endl;
    		  	cout<<"(a) Political "<<endl;
       			cout<<"(b) Cultural "<<endl;
        		cout<<"(c) Trade "<<endl;
                cout << "Enter Answer: ";
                cin >> as;
                if (as == 'a' || as == 'A' || as == 'b' || as == 'B' || as == 'c' || as == 'C') {
                if (as == 'a' || as == 'A') {
                	cout << "Correct Answer" << endl;
                	subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is Political." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (as != 'a' && as != 'A' && as != 'b' && as != 'B' && as != 'c' && as != 'C');
        
        do{
                cout<<"Q#4: Islam ............ us to follow the path of those who brought destruction upon themselves. "<<endl;
      			cout<<"(a) Allows "<<endl;
       			cout<<"(b) Teachers "<<endl;
        		cout<<"(c) Forbids "<<endl;
                cout << "Enter Answer: ";
                cin >> as;
                if (as == 'a' || as == 'A' || as == 'b' || as == 'B' || as == 'c' || as == 'C') {
                if (as == 'c' || as == 'C') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is Forbids." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (as != 'a' && as != 'A' && as != 'b' && as != 'B' && as != 'c' && as != 'C');
                
                do{
                cout<<"Q#5: safeguard means: "<<endl;
      			cout<<"(a) Protect "<<endl;
       			cout<<"(b) Destroy "<<endl;
        		cout<<"(c) Forget "<<endl;
                cout << "Enter Answer: ";
                cin >> as;
                if (as == 'a' || as == 'A' || as == 'b' || as == 'B' || as == 'c' || as == 'C') {
                if (as == 'a' || as == 'A') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is Protect." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (as != 'a' && as != 'A' && as != 'b' && as != 'B' && as != 'c' && as != 'C');
                
                do{
                cout<<"Q#6: These mangoes ........the market by April. "<<endl;
     			cout<<"(a) reach "<<endl;
       			cout<<"(b) reaches "<<endl;
        		cout<<"(c) will reach "<<endl;
                cout << "Enter Answer: ";
                cin >> as;
                if (as == 'a' || as == 'A' || as == 'b' || as == 'B' || as == 'c' || as == 'C') {
                if (as == 'c' || as == 'C') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is will reach." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (as != 'a' && as != 'A' && as != 'b' && as != 'B' && as != 'c' && as != 'C');
        
        
        do{     
                cout<<"Q#7: The sun ...... in the west. "<<endl;
    			cout<<"(a) sets "<<endl;
       			cout<<"(b) set "<<endl;
        		cout<<"(c) in set "<<endl;
                cout << "Enter Answer: ";
                cin >> as;
                if (as == 'a' || as == 'A' || as == 'b' || as == 'B' || as == 'c' || as == 'C') {
                if (as == 'a' || as == 'A') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is Sets." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (as != 'a' && as != 'A' && as != 'b' && as != 'B' && as != 'c' && as != 'C');
                
                do{
                cout<<"Q#8: They.....hockey at this time. "<<endl;
      			cout<<"(a) plays "<<endl;
      			cout<<"(b) are playing "<<endl;
        		cout<<"(c) play "<<endl;
                cout << "Enter Answer: ";
                cin >> as;
                if (as == 'a' || as == 'A' || as == 'b' || as == 'B' || as == 'c' || as == 'C') {
                if (as == 'b' || as == 'B') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is are playing." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (as != 'a' && as != 'A' && as != 'b' && as != 'B' && as != 'c' && as != 'C');
                
                do{
                cout<<"Q#9: I had never ..... snow before I went to murree. "<<endl;
      			cout<<"(a) see "<<endl;
       			cout<<"(b) sees "<<endl;
       			cout<<"(c) seen "<<endl;
                cout << "Enter Answer: ";
                cin >> as;
                if (as == 'a' || as == 'A' || as == 'b' || as == 'B' || as == 'c' || as == 'C') {
                if (as == 'c' || as == 'C') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is Seen." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (as != 'a' && as != 'A' && as != 'b' && as != 'B' && as != 'c' && as != 'C');
                
                do{
				
                cout<<"Q#10: hey flash upon that inward ..... "<<endl;
      			cout<<"(a) Eye "<<endl;
       			cout<<"(b) Feeling "<<endl;
       			cout<<"(c) vision "<<endl;
                cout << "Enter Answer: ";
                cin >> as;
                if (as == 'a' || as == 'A' || as == 'b' || as == 'B' || as == 'c' || as == 'C') {
                if (as == 'a' || as == 'A') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is Eye." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (as != 'a' && as != 'A' && as != 'b' && as != 'B' && as != 'c' && as != 'C');
                break;

            case 'P':
            case 'p':
                cout << "**********   Welcome to Physics test   **********" << endl;
                char a;
                do{
				
                cout << "Q#1: The study of properties of the ionic state of matter is called:" << endl;
                cout << "(a) Astrophysics " << endl;
                cout << "(b) Plasma Physics " << endl;
                cout << "(c) Sounds " << endl;
                cout << "Enter Answer: ";
                cin >> a;
                if (a == 'a' || a == 'A' || a == 'b' || a == 'B' || a == 'c' || a == 'C') {
                if (a == 'b' || a == 'B') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is Plasma Physics." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (a != 'a' && a != 'A' && a != 'b' && a != 'B' && a != 'c' && a != 'C');
                
                do{
                cout<<"Q#2: SI unit of electric charge is:  "<<endl;
      			cout<<"(a) Kelvin "<<endl;
       			cout<<"(b) Ampere "<<endl;
        		cout<<"(c) Pascal "<<endl;
                cout << "Enter Answer: ";
                cin >> a;
                if (a == 'a' || a == 'A' || a == 'b' || a == 'B' || a == 'c' || a == 'C') {
                if (a == 'c' || a == 'C') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is Pascal." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (a != 'a' && a != 'A' && a != 'b' && a != 'B' && a != 'c' && a != 'C');
                
                do{
                cout<<"Q#3:Least count of digital vernier callipers is: "<<endl;
      			cout<<"(a) 0.01 mm "<<endl;
       			cout<<"(b) 1 mm "<<endl;
        		cout<<"(c) 0.001 mm "<<endl;
                cout << "Enter Answer: ";
                cin >> a;
                if (a == 'a' || a == 'A' || a == 'b' || a == 'B' || a == 'c' || a == 'C') {
                if (a == 'a' || a == 'A') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is 0.01mm." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (a != 'a' && a != 'A' && a != 'b' && a != 'B' && a != 'c' && a != 'C');
                
                do{
                cout<<"Q#4: 10^6 Stands for:  "<<endl;
      			cout<<"(a) Pico "<<endl;
       			cout<<"(b) Mega "<<endl;
        		cout<<"(c) Micro "<<endl;
                cout << "Enter Answer: ";
                cin >> a;
                if (a == 'a' || a == 'A' || a == 'b' || a == 'B' || a == 'c' || a == 'C') {
                if (a == 'b' || a == 'B') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is Mega." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (a != 'a' && a != 'A' && a != 'b' && a != 'B' && a != 'c' && a != 'C');
                
                do{
				
                cout<<"Q#5: Pitch of the screw gauge is:  "<<endl;
      			cout<<"(a) 1mm "<<endl;
       			cout<<"(b) 0.1m "<<endl;
        		cout<<"(c) 0.01mm "<<endl;
                cout << "Enter Answer: ";
                cin >> a;
                if (a == 'a' || a == 'A' || a == 'b' || a == 'B' || a == 'c' || a == 'C') {
                if (a == 'a' || a == 'A') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is 1mm." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (a != 'a' && a != 'A' && a != 'b' && a != 'B' && a != 'c' && a != 'C');
                
                do{
                cout<<"Q#6: Study of motion of the bodies is known as:  "<<endl;
      			cout<<"(a) Heat "<<endl;
       			cout<<"(b) Light "<<endl;
        		cout<<"(c) Mechanics "<<endl;
                cout << "Enter Answer: ";
                cin >> a;
                if (a == 'a' || a == 'A' || a == 'b' || a == 'B' || a == 'c' || a == 'C') {
                if (a == 'c' || a == 'C') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is Mechanics." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (a != 'a' && a != 'A' && a != 'b' && a != 'B' && a != 'c' && a != 'C');
                
                do{
                cout<<"Q#7: Rest and motion are  states:  "<<endl;
      			cout<<"(a) Constant "<<endl;
      			cout<<"(b) Relative "<<endl;
        		cout<<"(c) Variable "<<endl;
                cout << "Enter Answer: ";
                cin >> a;
                if (a == 'a' || a == 'A' || a == 'b' || a == 'B' || a == 'c' || a == 'C') {
                if (a == 'b' || a == 'B') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is Relative." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (a != 'a' && a != 'A' && a != 'b' && a != 'B' && a != 'c' && a != 'C');
                
                do{
                cout<<"Q#8: The motion of the string of a violin is:  "<<endl;
      			cout<<"(a) Vibratory "<<endl;
      			cout<<"(b) Rotatory "<<endl;
        		cout<<"(c) Translatory "<<endl;
                cout << "Enter Answer: ";
                cin >> a;
                if (a == 'a' || a == 'A' || a == 'b' || a == 'B' || a == 'c' || a == 'C') {
                if (a == 'a' || a == 'A') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is Vibratory." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (a != 'a' && a != 'A' && a != 'b' && a != 'B' && a != 'c' && a != 'C');
                
                do{
                cout<<"Q#9: Rate of change of velocity is known as:  "<<endl;
      			cout<<"(a) Velocity "<<endl;
      			cout<<"(b) Acceleration "<<endl;
        		cout<<"(c) Distance "<<endl;
                cout << "Enter Answer: ";
                cin >> a;
                if (a == 'a' || a == 'A' || a == 'b' || a == 'B' || a == 'c' || a == 'C') {
                if (a == 'b' || a == 'B') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is Acceleration." << endl;
                }}else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (a != 'a' && a != 'A' && a != 'b' && a != 'B' && a != 'c' && a != 'C');
        
        		do{      
                cout<<"Q#10: Speed is a  quantity:  "<<endl;
      			cout<<"(a) Scalar "<<endl;
      			cout<<"(b) Vector "<<endl;
        		cout<<"(c) Both "<<endl;
                cout << "Enter Answer: ";
                cin >> a;
                if (a == 'a' || a == 'A' || a == 'b' || a == 'B' || a == 'c' || a == 'C') {
                if (a == 'a' || a == 'A') {
                    cout << "Correct Answer" << endl;
                    subjectMarks++;
                } else {
                    cout << "Incorrect Answer." << endl;
                    cout << "Correct answer is Scalar." << endl;
                }}
                else {
            cout << "Invalid input. Please enter 'A', 'B', 'C'." << endl;
        }}while (a != 'a' && a != 'A' && a != 'b' && a != 'B' && a != 'c' && a != 'C');
                
                break;

            case 'Q':
            case 'q':
                cout << "Logout. Thank you!" << endl;
                break;

            default:
                cout << "Invalid choice. Please select a valid subject." << endl;
                break;
        }

        totalMarks = totalMarks + subjectMarks;
        total_Q = total_Q + mark_each;

        double sbj_percentage = static_cast<double>(subjectMarks) /mark_each * 100.0;
        char sbj_grade;

        if (sbj_percentage >= 90.0) {
            sbj_grade = 'A';
        } else if (sbj_percentage >= 80.0) {
            sbj_grade = 'B';
        } else if (sbj_percentage >= 70.0) {
            sbj_grade = 'C';
        } else if (sbj_percentage >= 60.0) {
            sbj_grade = 'D';
        } else {
            sbj_grade = 'F';
        }

        cout << "Subject Result: " << subjectMarks << "/10" << endl;
        cout << "Subject Percentage: " << sbj_percentage << "%" << endl;
        cout << "Subject Grade: " << sbj_grade << endl;
        cout << "--------------------------------------------" << endl;

    } while (choice != 'Q' && choice != 'q');
    double overall_perc = static_cast<double>(totalMarks)/ total_marks * 100.0;

    cout << "Total Marks: " << totalMarks << "/" << total_marks << endl;
    cout << "Overall Percentage: " << overall_perc << "%" << endl;

    char overall_grade;

    if (overall_perc >= 90.0) {
        overall_grade = 'A';
    } else if (overall_perc >= 80.0) {
        overall_grade = 'B';
    } else if (overall_perc >= 70.0) {
        overall_grade = 'C';
    } else if (overall_perc >= 60.0) {
        overall_grade = 'D';
    } else {
        overall_grade = 'F';
    }

    cout << "Overall Grade: " << overall_grade << endl;

    if (overall_perc > 50.0) {
        cout << "Result: PASS" << endl;
    } else {
        cout << "Result: FAIL" << endl;
    }

    return 0;
}

