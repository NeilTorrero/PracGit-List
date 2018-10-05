#ifdef _LLISTABIORD_H_
#def _LLISTABIORD_H_

typedef struct N{
  int e;
  struct N *seg;
  struct N *ant;
}NodeBiOrd;

typedef struct{
  NodeBiOrd *pri;
  NodeBiOrd *ult;
  NodeBiOrd *pdi;
}LlistaBiOrd;

int ELEMENT_indefinit ();

LlistaBiOrd LLISTABIORD_crea ();

void LLISTABIORD_insereixOrdenat (LlistaBiOrd *l, int e);

int LLISTABIORD_consulta (LlistaBiOrd l);

void LLISTABIORD_esborra (LlistaBiOrd *l);

void LLISTABIORD_avanca (LlistaBiOrd *l);

void LLISTABIORD_retrocediex (LlistaBiOrd *l);

void LLISTABIORD_vesInici (LlistaBiOrd *l);

void LLISTABIORD_vesFi (LlistaBiOrd *l);

int LLISTABIORD_inici (LlistaBiOrd l);

int LLISTABIORD_fi (LlistaBiOrd l);

int LLISTABIORD_buida (LlistaBiOrd l);

int LLISTABIORD_destrueix (LlistaBiOrd *l);

#endif
