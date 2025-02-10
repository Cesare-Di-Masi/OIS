#include <vector>
using namespace std;

vector<int> verifica(int N, vector<int> T) {
    if (N % 2) {
        return {};
    }
    return vector<int>(N, 42);
}
