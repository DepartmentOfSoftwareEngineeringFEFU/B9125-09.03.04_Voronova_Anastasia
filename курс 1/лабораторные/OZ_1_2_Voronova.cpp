#include <set>
#include <iostream>

using namespace std;

bool check_str(wstring S, set<wchar_t> letters);

int main(){

    set<wchar_t> letters = {
        L'а', L'б', L'в', L'г', L'д', L'е', L'ё', L'ж', L'з', L'и',
        L'й', L'к', L'л', L'м', L'н', L'о', L'п', L'р', L'с', L'т',
        L'у', L'ф', L'х', L'ц', L'ч', L'ш', L'щ', L'ъ', L'ы', L'ь',
        L'э', L'ю', L'я'};

    wstring S;
    wcout << L"Enter Surname, name, secondname: ";
    wcin >> S;
    wcout << S << endl; 
    if (check_str(S, letters))
        wcout << L"The string is valid" << endl;
    else
        wcout << L"The string is not valid" << endl;
   
}
bool check_str(wstring S, set<wchar_t> letters){
    for (int i = 0; i < S.length(); i++){
        if(iswspace(S[i]))
            continue;
        if (letters.find(S[i]) == letters.end()){
            wcout << S[i] << endl;
            return false;
        }
            
        
    }
    return true;
}