// #include <iostream>
// #include <vector>
// #include <iomanip>
// #include <string>
// using namespace std;

// struct Node {
//     string type;       // "happy" or "sad"
//     double count;
//     int gen;
//     Node* left;        // happy child
//     Node* right;       // sad child

//     Node(string t, double c, int g) : type(t), count(c), gen(g), left(nullptr), right(nullptr) {}
// };

// void buildTree(Node* node, int maxGen) {
//     if (node->gen >= maxGen) return;

//     if (node->type == "happy") {
//         node->left  = new Node("happy", 0.30 * node->count, node->gen + 1);
//         node->right = new Node("sad",   0.70 * node->count, node->gen + 1);
//     } else {
//         node->left  = new Node("happy", 0.50 * node->count, node->gen + 1);
//         node->right = new Node("sad",   0.50 * node->count, node->gen + 1);
//     }

//     buildTree(node->left,  maxGen);
//     buildTree(node->right, maxGen);
// }

// void printTree(Node* node, string prefix = "", bool isLeft = true) {
//     if (!node) return;
//     cout << prefix << (isLeft ? "|-- " : "L-- ");
//     cout << "[Gen " << node->gen << "] "
//          << (node->type == "happy" ? "Happy" : "Sad  ")
//          << " : " << fixed << setprecision(2) << node->count << "\n";
//     string newPrefix = prefix + (isLeft ? "|   " : "    ");
//     printTree(node->left,  newPrefix, true);
//     printTree(node->right, newPrefix, false);
// }

// void collectTotals(Node* node, vector<double>& happy, vector<double>& sad) {
//     if (!node) return;
//     if (node->type == "happy") happy[node->gen] += node->count;
//     else                        sad[node->gen]   += node->count;
//     collectTotals(node->left,  happy, sad);
//     collectTotals(node->right, happy, sad);
// }

// void freeTree(Node* node) {
//     if (!node) return;
//     freeTree(node->left);
//     freeTree(node->right);
//     delete node;
// }

// int main() {
//     double N;
//     int generations;

//     cout << "Enter number of happy persons (N): ";
//     cin >> N;
//     cout << "Enter number of generations: ";
//     cin >> generations;

//     Node* root = new Node("happy", N, 0);
//     buildTree(root, generations);

//     cout << "\n========== TREE STRUCTURE ==========\n";
//     cout << "[Gen 0] Happy : " << fixed << setprecision(2) << N << "\n";
//     printTree(root->left,  "", true);
//     printTree(root->right, "", false);

//     vector<double> happyTotals(generations + 1, 0);
//     vector<double> sadTotals(generations + 1, 0);
//     collectTotals(root, happyTotals, sadTotals);

//     cout << "\n========== GENERATION SUMMARY ==========\n";
//     cout << "--------------------------------------------------\n";
//     cout << "Gen | Groups (2^gen) |   Happy    |    Sad\n";
//     cout << "--------------------------------------------------\n";
//     for (int i = 0; i <= generations; i++) {
//         int groups = (1 << i);
//         cout << setw(3) << i << " | "
//              << setw(13) << groups << " | "
//              << setw(10) << happyTotals[i] << " | "
//              << setw(10) << sadTotals[i] << "\n";
//     }
//     cout << "--------------------------------------------------\n";

//     freeTree(root);
//     return 0;
// }


#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double N;
    cout << "Enter number of happy persons (N): ";
    cin >> N;

    vector<double> happy, sad;
    happy.push_back(N);  // Start: all happy

    cout << fixed << setprecision(2);

    // Run for 4 generations (elements at index 0-7 get processed)
    for (int gen = 0; gen < 4; gen++) {
        cout << "\n====== Generation " << gen + 1 << " ======\n";

        // Snapshot sizes so we only process current elements
        int happySize = happy.size();
        int sadSize   = sad.size();

        // Process all current happy elements (pop front-style using index)
        vector<double> newHappy, newSad;

        cout << "  Processing Happy vector (" << happySize << " elements):\n";
        for (int i = 0; i < happySize; i++) {
            double val = happy[i];
            double h   = 0.30 * val;
            double s   = 0.70 * val;
            cout << "    " << val << " -> Happy: " << h << ", Sad: " << s << "\n";
            newHappy.push_back(h);
            newSad.push_back(s);
        }

        cout << "  Processing Sad vector (" << sadSize << " elements):\n";
        for (int i = 0; i < sadSize; i++) {
            double val = sad[i];
            double h   = 0.50 * val;
            double s   = 0.50 * val;
            cout << "    " << val << " -> Happy: " << h << ", Sad: " << s << "\n";
            newHappy.push_back(h);
            newSad.push_back(s);
        }

        // Replace old vectors with new split results
        happy = newHappy;
        sad   = newSad;

        cout << "  Happy vector: [ ";
        for (double v : happy) cout << v << " ";
        cout << "]\n";

        cout << "  Sad   vector: [ ";
        for (double v : sad) cout << v << " ";
        cout << "]\n";
    }

    // After 4 generations, sum up all remaining elements
    double totalHappy = 0, totalSad = 0;
    for (double v : happy) totalHappy += v;
    for (double v : sad)   totalSad   += v;

    cout << "\n====== After 4 Generations: Sum of Remaining Elements ======\n";
    cout << "  Happy vector (" << happy.size() << " elements): [ ";
    for (double v : happy) cout << v << " ";
    cout << "]\n";
    cout << "  Sad   vector (" << sad.size()   << " elements): [ ";
    for (double v : sad)   cout << v << " ";
    cout << "]\n";

    cout << "\n  Total Happy : " << round(totalHappy) << "\n";
    cout << "  Total Sad   : " << round(totalSad)   << "\n";
    cout << "  Grand Total : " << (totalHappy + totalSad) << "\n";

    return 0;
}