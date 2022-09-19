#include <iostream>
#include <vector>
#include <list>

using namespace std;

const int MAXimUM__N = 1000;
const int numerPOCK = 50;

int inv (vector <int > &a) 
{ 
    int res = 0, i = 0;
    vector <list <int > > lst_pockets(numerPOCK);
    for (i = 0; i < a.size(); i++) 
    {
        
        int PoSS = (a[i] - 1) / (MAXimUM__N / numerPOCK);
        
        auto iteration = lst_pockets[PoSS].begin();
        
        
        int sec = 0;
          while (iteration != lst_pockets[PoSS].end() && *iteration < a[i])
        {
             iteration++;
             sec++;
        }
        
        res += lst_pockets[PoSS].size() - sec;
        
        lst_pockets[PoSS].insert(iteration, a[i]); 
        
        for (int j = PoSS + 1; j < numerPOCK; j++) 
        {
            res += lst_pockets[j].size();
        }
        }
        return res;
        }

int main ()
{
    int N; 
    cout << "ВВЕДИТЕ НЕОБХОДИМУЮ ДЛИНУ: "; 
    cin >> N;
    
    vector <int > a(N);
    
    cout << "ВВЕДИТЕ ПЕРЕСТАНОВКУ :";
    
    for (int i = 0; i < N; i++) cin >> a[i];
    
    int res = inv(a);
    
    if (res % 2 == 0) cout << "ЧЕТНОЕ ЗНАЧЕНИЕ";
    else cout << "НЕЧЕТНОЕ ЗНАЧЕНИЕ\n";
    return 0;
}
