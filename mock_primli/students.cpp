#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

struct students {
  string name;
  int roll;
  int mark;


  bool operator<(const students& a)
    {
        if(mark == a.mark) {
            return roll > a.roll;
        }
        return mark < a.mark;
    }
};

string right(string const& str, size_t s)
{
    if ( str.size() < s )
        return str + string(s-str.size(), ' ');
    else
        return str;
}
 
string left(string const& str, size_t s)
{
    if ( str.size() < s )
        return string(s-str.size(), ' ') + str;
    else
        return str;
}



int main() {
  vector<students>data;
  int t;
  cin >> t;
  while(t--){
    students st = students();
    cin >> st.roll >> st.name >> st.mark;
    data.push_back(st);
  }

  sort(data.begin(), data.end());
  reverse(data.begin(), data.end());

  cout << "Roll | Name       | Marks" << endl;
  cout << "-------------------------" << endl;
  for (int i; i < data.size(); i++){
    cout << left(to_string(data[i].roll), 4) << " | " << right(data[i].name, 10) << " | " << data[i].mark << endl;
  }

  return 0;
}

