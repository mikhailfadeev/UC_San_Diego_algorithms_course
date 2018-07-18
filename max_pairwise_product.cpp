#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;


long long MaxPairwiseProduct(const vector<long long>& numbers) 
{
  long long result;
  int n = numbers.size();
  int index_1 = 0;
  int index_2 = 0;
  
  for (int i = 0; i < n; ++i) 
  {
   if (numbers[i] >= numbers[index_1]) 
   {
    index_2 = index_1;
    index_1 = i;
   }
   else if (numbers[i] >= numbers[index_2])
   {
    index_2 = i;
   }
   else if (index_1 == index_2)
   {
    index_2 = i;
   }
   
  }
  
  result = numbers[index_1] * numbers[index_2];
  return result;
}

int main() {
    int n;
    cin >> n;
    std::vector<long long> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    long long result = MaxPairwiseProduct(numbers);
    cout << result << "\n";
    return 0;
}
