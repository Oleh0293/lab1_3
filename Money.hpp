#pragma once
#include <string>

using namespace std;

class Money
{
private:
  int g500, g200, g100, g50, g20, g10, g5, g2, g1, c50, c25, c10, c5, c2, c1;
public:
  int GetG500()  const { return g500;    }
  int GetG200()  const { return g200;    }
  int GetG100()  const { return g100;    }
  int GetG50 ()  const { return g50 ;    }
  int GetG20 ()  const { return g20 ;    }
  int GetG10 ()  const { return g10 ;    }
  int GetG5  ()  const { return g5  ;    }
  int GetG2  ()  const { return g2  ;    }
  int GetG1  ()  const { return g1  ;    }
  int GetC50 ()  const { return c50 ;    }
  int GetC25 ()  const { return c25 ;    }
  int GetC10 ()  const { return c10 ;    }
  int GetC5  ()  const { return c5  ;    }
  int GetC2  ()  const { return c2  ;    }
  int GetC1  ()  const { return c1  ;    }

  void SetG500(int value);
  void SetG200(int value);
  void SetG100(int value);
  void SetG50 (int value);
  void SetG20 (int value);
  void SetG10 (int value);
  void SetG5  (int value);
  void SetG2  (int value);
  void SetG1  (int value);
  void SetC50 (int value);
  void SetC25 (int value);
  void SetC10 (int value);
  void SetC5  (int value);
  void SetC2  (int value);
  void SetC1  (int value);

  void   Read(Money &a, Money &b);
  bool   Init(int gg500, int gg200, int gg100, int gg50, int gg20, int gg10, int gg5, int gg2,            int gg1, int cc50, int cc25, int cc10, int cc5, int cc2, int cc1);
  void   Display    (Money& a, Money& b)  const;
  string ToString   (Money& a, Money& b)  const;
  double get_sum1   (Money& a);
  double get_sum2   (Money& b);
  void   Dif        (Money& a, Money& b);
  void   Choose     (Money& a, Money& b);
  void   Multiply   (Money& a, Money& b);
  void   Mult_1     (Money& a, Money& b);
  void   Mult_2     (Money& a, Money& b);
  void   Mult_3     (Money& a, Money& b);
};
