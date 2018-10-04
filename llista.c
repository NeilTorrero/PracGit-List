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
  NodeBiOrd* aux;
  aux = (NodeBiOrd*) malloc (sizeof(NodeBiOrd));
  if (aux == NULL){
    printf("No s'ha pugut inserir a la llista\n");
  }else{
    aux -> e = e;
    l.ant = l.pri;
    while (l.ant -> seg != NULL && l.ant -> seg -> e < e) {
      l.ant = l.ant -> seg;
    }
    aux -> seg = l.ant -> seg;
    l.ant -> seg = aux;
  }
  return l;
}

Element LLISTABIORD_consulta (LlistaBiOrd l){
  Element e = ELEMENT_indefinit();
  if (l.pdi != l.pri && l.pdi != l.ult) {
    l = l.pdi -> e;
  }
  return e;
}

void LLISTABIORD_esborra (LlistaBiOrd *l){
  NodeBiOrd *aux;
  if (l -> pdi != l -> pri && l -> pdi != l -> ult) {
    aux = l -> pdi;
    aux -> ant -> seg = aux -> seg;
    aux -> seg -> ant = aux -> ant;
    l -> pdi = l -> pdi -> seg;
    free (aux);
  }
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
