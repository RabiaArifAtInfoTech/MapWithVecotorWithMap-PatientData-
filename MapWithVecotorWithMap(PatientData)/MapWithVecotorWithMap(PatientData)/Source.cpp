#include <iterator>
#include <map>
#include<vector>
#include<iostream>
#include <ctime>
#include <time.h>
#include<string>
using namespace std;

//void printValuesOfBP(vector<int> vect)
//{
//    int* pos = vect.data();
//
//    // prints the vector
//    cout << "BP: ";
//    for (int i = 0; i < vect.size(); ++i)
//        cout << *pos++ << " ";
//}

//................Displaying 1st.........
//void printValuesOfTime(vector< map<string, int>> vect)
//{
//    map<string, int>* pos = vect.data();
// 
//    cout << "Time \t" << "Blood Pressure\n";
//    for (auto itr = vect.begin(); itr != vect.end(); ++itr) {
//        cout << "\t\t" << itr->begin()->first << "\t" << itr->begin()->second<<endl;
//       
//    }
//}

//void printValuesOfMap(map<string, vector<map<string, int>>> m)
//{
//    for (auto it = m.begin(); it != m.end(); it++)
//    {
//        cout << "Time \t" << "Blood Pressure\n";
//        cout << "\t";
//        for (auto it1 = it->second.begin(); it1 != it->second.end(); it1++)
//        {
//            for (auto it2 = it1->begin(); it2 != it1->end(); it2++)
//            {
//                cout << "Time of test: " << it2->first << "\tRestlt:" << it2->second << endl;
//            }
//        }
//    }
//}
void printValuesOfBpAndTime(vector<map<string, int>> vect)
{
    map<string, int>* pos = vect.data();
    cout << "Time \t" << "Blood Pressure\n";
    for (auto itr = pos->begin(); itr != pos->end(); ++itr)
    {
        cout << "\t\t" << itr->first << "\t" << itr->second << endl;
    }

    //going into vector
    //for (int i = 0; i < 1; ++i)
    //{
    //    //going in vector
    //    for (auto itr = pos->begin(); itr != pos->end(); ++itr)
    //    {
    //        cout << "\t\t" << itr->first << "\t" << itr->second << endl;
    //    }
    //}

    //going into vector
    /*for (int i = 0; i < vect.size(); ++i)
    {
        for (auto itr = pos->begin(); itr != pos->end(); ++itr)
        {
            for (auto itr2 = itr->begin(); itr2 != itr->end; ++itr2)
            {
                cout << "\t\t" << itr2->first << "\t" << itr2->second << endl;
            }
        }
    }*/
    /*for (auto itr = vect.begin(); itr != vect.end(); itr++)
    {
        cout << "Time \t" << "Blood Pressure\n";
        cout << "\t";
        {
            for(auto itr1 = )

        }
        for (auto it1 = itr->; it1 != it->second.end(); it1++)
        {
            for (auto it2 = it1->begin(); it2 != it1->end(); it2++)
            {
                cout << "Time of test: " << it2->first << "\tRestlt:" << it2->second << endl;
            }
        }
    }*/
}

//void printValuesOfTime(vector< map<string, int>> vect)
//{
//    map<string, int>* pos = vect.data();
//    /*for (int i = 0; i < vect.size(); ++i)
//        cout << *pos++ << " ";*/
//
//        //for (auto itrMap = vect.begin()->begin(); itrMap != vect.end()->end(); ++itrMap) {
//      /*  for (auto itrMap = vect.begin(); itrMap != vect.end(); ++itrMap) {
//
//            cout << "Time \t" << "Blood Pressure\n";
//            cout << "\t";
//            printValuesOfBP(itrMap->begin()->second);
//
//        }*/
//        //<< "\t" << itrMap->second;
//    for (auto itrmap = vect.begin()->begin(); itrmap != vect.end()->end(); ++itrmap) {
//
//        for (auto itrvec = vect.begin()->begin(); itrvec != vect.end()->end(); ++itrvec) {
//            cout << "\t" << itrvec->first << "\t" << itrvec->second;
//        }
//    }
//
//}
int main()
{
    map<string, vector< map<string, int>>> patientData;

    vector< map<string, int>> patient1;
    map<string, int> patient1Data;

    patient1Data.emplace("10:00", 60);
    patient1Data.emplace("10:30", 66);
    patient1Data.emplace("11:00", 69);
    patient1Data.emplace("11:30", 75);
    patient1Data.emplace("12:00", 80);
    patient1Data.emplace("12:30", 79);


    
    for (auto itr = patient1Data.begin(); itr != patient1Data.end(); ++itr) {
        patient1.push_back(patient1Data);
    }

    vector< map<string, int>> patient2;
    map<string, int> patient2Data;

    patient2Data.insert(make_pair("10:00", 70));
    patient2Data.insert(make_pair("10:30", 50));
    patient2Data.insert(make_pair("11:00", 69));
    patient2Data.insert(make_pair("11:30", 75));
    patient2Data.insert(make_pair("12:00", 79));
    patient2Data.insert(make_pair("12:30", 82));



    for (auto itr = patient2Data.begin(); itr != patient2Data.end(); ++itr) {
        patient2.push_back(patient2Data);
    }

    vector< map<string, int>> patient3;
    map<string, int> patient3Data;

    patient3Data.insert(make_pair("10:00", 50));
    patient3Data.insert(make_pair("10:30", 55));
    patient3Data.insert(make_pair("11:00", 75));
    patient3Data.insert(make_pair("11:30", 77));
    patient3Data.insert(make_pair("12:00", 67));
    patient3Data.insert(make_pair("12:30", 75));



    for (auto itr = patient3Data.begin(); itr != patient3Data.end(); ++itr) {
        patient3.push_back(patient3Data);
    }


   

    

    // insert elements 
    patientData.insert({ "Patient 1", patient1 });
    patientData.insert({ "Patient 2", patient2 });
    patientData.insert({ "Patient 3", patient3 });

    //size
    //cout << "No. of patients: " << patientData.size() << endl;
    //max_size
    //cout << "Max patients data that can be stored: " << patientData.max_size() << endl;

    //printValuesOfMap(patientData);
    // 
    // 
    //Print map
    for (auto itr = patientData.begin(); itr != patientData.end(); ++itr) {
        cout << itr->first
            << '\t';
        printValuesOfBpAndTime(itr->second);
        cout << endl;
    }

    //erase function

   /* patientData.erase("Patient 1");
    cout << "After erasing :::" << endl;
    for (auto itr = patientData.begin(); itr != patientData.end(); ++itr) {
        cout << itr->first
            << '\t';
        printValuesOfBP(itr->second);
        cout << endl;
    }*/

    /// assigning the elements from patientData to backUpPatientData
    //map<string, vector<int>> backUpPatientData(patientData.begin(), patientData.end());

    ////Print backUpPatientData
    //cout << "BackedUp Data...." << endl;
    //for (auto itr = backUpPatientData.begin(); itr != backUpPatientData.end(); ++itr) {
    //    cout << itr->first
    //        << '\t';
    //    //printValuesOfBP(itr->second);
    //    cout << endl;
    //}


    //cout << "Name: " << patientData.at("Patient 1"0;

    //count
    /*string patientQuery;
    cout << "Enter patient Name to see if it is on the list: ";
    cin >> patientQuery;
    cout << "Name: " << patientData.at(patientQuery).front();*/
    /*if (patientData.count(patientQuery))
    {
        cout << "This patient is currently in the hospital\n";
        cout << "Name: " << patientData.at(patientQuery).front();
    }

    else
        cout << "This patient is not in the hospital\n";*/


    return 0;
}