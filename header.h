struct schedule{
  char class[100];
  int period;
};

struct schedule example();
void print(struct schedule s);
void modify(struct schedule *s, char *class, int period);
