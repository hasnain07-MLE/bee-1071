#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float N1, N2, N3, N4;
    cin >> N1 >> N2 >> N3 >> N4;
    
    float avg = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / 10;
    cout << fixed << setprecision(1) << "Media: " << avg << endl;
    
    if (avg >= 7.0) {
        cout << "Aluno aprovado." << endl;
    } else if (avg < 5.0) {
        cout << "Aluno reprovado." << endl;
    } else {
        cout << "Aluno em exame." << endl;
        float d;
        cin >> d;
        cout << fixed << setprecision(1) << "Nota do exame: " << d << endl;
        avg = (avg + d) / 2;
        if (avg >= 5.0) {
            cout << "Aluno aprovado." << endl;
        } else {
            cout << "Aluno reprovado." << endl;
        }
        cout << fixed << setprecision(1) << "Media final: " << avg << endl;
    }
    
    return 0;
}
