int main() {
  unsigned int tab[1000000];
  #pragma omp parallel for
  for (unsigned int i = 0; i < 1000000; ++i)
    for (unsigned int j = 0; j < 10000; ++j)
      tab[i] = j;

  return 0;
}
