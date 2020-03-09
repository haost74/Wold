#include "Dna.h"

    void Dna::generate(double par){
         std::cout << par << '\n';
    }

    double Dna::random(double p1, double p2){
      std::random_device rd;
      std::mt19937 mt(rd());
      std::uniform_real_distribution<double> dist(p1, p2);
      return dist(mt);
    }