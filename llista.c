#include <llista.h>

LlistaBiOrd LLISTABIORD_crea(){
  LlistaBiOrd l;
  l.pri = (NodeBiOrd*) malloc (sizeof(NodeBiOrd));
  if (l.pri == NULL){
    printf ("No s'ha pugut crear la llista.\n");
  }else{
    l.pri -> e = ELEMENT_indefinit();
    l.pri -> ant = NULL;
    l.ult = (NodeBiOrd*) malloc (sizeof(NodeBiOrd));
    if (l.ult == NULL) {
      printf ("No s'ha pugut crear la llista.\n");
      free (l.pri);
      l.pri = NULL;
    }else{
      l.ult -> e = ELEMENT_indefinit();
      l.ult -> seg = NULL;
      l.pri -> seg = l.ult;
      l.ult -> ant = l.pri;
      l.pri = l.ult;
    }
  }
  return l;
}

void LLISTABIORD_insereixOrdenat (LlistaBiOrd *l, Element e){

}

Element LLISTABIORD_consulta (LlistaBiOrd l){

}

void LLISTABIORD_esborra (LlistaBiOrd *l){

}

void LLISTABIORD_avanca (LlistaBiOrd *l){

}

void LLISTABIORD_retrocediex (LlistaBiOrd *l){

}

void LLISTABIORD_vesInici (LlistaBiOrd *l){

}

void LLISTABIORD_vesFi (LlistaBiOrd *l){

}

int LLISTABIORD_inici (LlistaBiOrd l){

}

int LLISTABIORD_fi (LlistaBiOrd l){

}

int LLISTABIORD_buida (LlistaBiOrd l){

}

int LLISTABIORD_destrueix (LlistaBiOrd l){

}
