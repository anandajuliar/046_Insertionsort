#include <iostream>
using namespace std;

int arr[9];
int n;

void input() { // procedur untuk input
    while (true) {
        cout << "masukkan banyaknya elemen array :"; // Output ke layar
        cin >> n; // Input dari pengguna
        if (n <= 20) // Jika n kurang dari atau sama dengan 20
            break; // Keluar dari loop
        else { // Jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // Output ke layar
        }
    }
    cout << endl; // Output baris kosong
    cout << "=====================" << endl; // Output ke layar
    cout << "Masukkan elemen array" << endl; // Output ke layar
    cout << "=====================" << endl; // Output ke layar

    for (int i = 0; i < n; i++) { // Looping dengan i dimulai dari 0 hingga n
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i]; // Input dari pengguna
    }
}

void insertionSort() {  //prosedur
    int i, temp, j;

    for (i = 1; i <= n - 1; i++) { //step 1

        temp = arr[i]; //step 2

        j = i - 1; //step 3

        while (j >= 0 && arr[j] > temp) //step 4
        {
            arr[j + 1] = arr[j];            //step 4 a
            j--;                            // step 4b
        }
        arr[j + 1] = temp;      //step 5
    }
}

void  display() {
    cout << endl; // Output baris kosong
    cout << "=================================" << endl; // Output ke layar
    cout << "Element Array yang telah tersusun" << endl; // Output ke layar
    cout << "=================================" << endl; // Output ke layar
    cout << endl; // Output baris kosong
    for (int j = 0; j < n; j++) {
        cout << arr[j];
        if (j < n - 1) {
            cout << " --->";
        }
    }
    cout << endl; // Output baris kosong
    cout << endl; // Output baris kosong
    cout << "Jumlah pass =" << n - 1 << endl; //Output jumlah pass
    cout << endl; // Output baris kosong
}

int main() {
    input();  // call the input function to get user input
    insertionSort(); //call the insertion
    display(); // display the sortde array
    system("pause");

    return 0;
}



