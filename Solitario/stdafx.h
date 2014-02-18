// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
#pragma once

// TODO: reference additional headers your program requires here

#include <string> 
#include <stdlib.h>
#include <time.h>
using namespace std;

class Carta{
	public:
		int valor; //1-13
		int grupo; //1-Corazon 2-Diamante 3-Espada 4-Trebol
		int color; //1-Rojo 2-Negro
		string direccion;
		string dirback;
		int x;
		int y;
		Carta *sig;
		string namePictureBox;
		Carta(int v, int g, int c, string d, string dd, int X, int Y)
		{
			valor = v;
			grupo = g;
			color = c;
			direccion = d;
			dirback=dd;
			x = X;
			y = Y;
			sig=0;
			namePictureBox = "-";
		}
		void setNPB(string NPB)
		{
			namePictureBox =NPB;
		}
		string getNPB()
		{
			return namePictureBox;
		}

};

class Pila{
	public:
		Carta *Tope;

		Pila()
		{
			Tope = 0;
		}

		void Pila::Push(Carta *C)
		{
			C->sig=Tope;
			Tope=C;
		}

		string Pila::Pop(int pos,int tipo, string NPB)
		{
			string result = "";
			Carta *recorrer=Tope;

			while((pos-1)>0)
			{
				recorrer=recorrer->sig;
				pos--;
			}
			recorrer->setNPB(NPB);

			if (tipo==0)
			{
				result=recorrer->direccion;
			}

			if (tipo==1)
			{
				result="..\\..\\Cartas\\atras.jpg";
			}
			return result;
		}

		Carta* Pila::PopR1()
		{
			Carta *temp;
			temp=Tope;
			Tope=Tope->sig;
			return temp;
		}

		Carta* Pila::PopR2(int p)
		{
			Carta *temp;
			temp=Tope;
			
			for (int i=1; i<p; i++)
			{
			temp=temp->sig;
			}

			Carta *temp2;
			temp2=temp->sig;
			temp->sig=temp->sig->sig;
			return temp2;
		}

		string Pila::getDire(int p)
		{
			Carta *t;
			t=Tope;
			for (int i=0; i<p; i++)
			{
				t=t->sig;
			}
			return t->direccion;
		}

};

class ListaC{
	public:
		Carta *inicio;
		Carta *current;
		
		ListaC()
		{
			inicio=0;
			current=0;
		}

		void ListaC::Insertar (Carta *ca)
		{
			if (inicio==0)
			{
				inicio=ca;
				current=ca;
				ca->sig=inicio;
			} else 
			{
				Carta *recorrer;
				recorrer=inicio;

				if (recorrer->sig==inicio)
				{
					ca->sig=inicio;
					recorrer->sig=ca;
				} else
				{
					
					while (recorrer->sig!=inicio)
					{
						recorrer=recorrer->sig;
					}

					ca->sig=inicio;
					recorrer->sig=ca;
				}
			}
		}

		string ListaC::getDir(int pos)
		{
			Carta *recorrer = inicio;

			for (int i=0; i<pos; i++)
			{
				recorrer=recorrer->sig;
			}
			string x=recorrer->direccion;
			return x;
		}

		string ListaC::newGetDirMove()
		{
			string x=current->direccion;
			current=current->sig;
			return x;
		}


		void ListaC::Eliminar()
		{
			Carta *recorrer = inicio;

			while (recorrer->sig->sig!=inicio)
			{
				recorrer=recorrer->sig;
			}
			recorrer->sig=inicio;
		}

		void ListaC::Nombres()
		{
			Carta *recorrer = inicio;

			for (int i=29; i<=52; i++)
			{
				string n = "c";
				std::string s = to_string(i);
				n.append(s);
				recorrer->setNPB(n);
				recorrer=recorrer->sig;
			}
		}

};


class Juego{
	public:
		bool bar[52];
		Carta *baraja[52];
		Pila corazon, diamante, espada, trebol;
		Pila r1,r2,r3,r4,r5,r6,r7,rrr;
		ListaC barajaccc;
		string dirx;

		Juego()
		{
			dirx="..\\..\\Cartas\\cero.jpg";

			for (int i=0; i<52; i++)
			{
				bar[i]=true;
			}

			int pos=0;
			int color=0;
			int abc=0,xyz=0;

			string back=("..\\..\\Cartas\\atras.jpg");
			string dir1=("..\\..\\Cartas\\");
			string dir2=("..\\..\\Cartas\\");
			string dir3=("..\\..\\Cartas\\");
			string dir4=("..\\..\\Cartas\\");
			string dir5=("..\\..\\Cartas\\");
			string dir6=("..\\..\\Cartas\\");
			string dir7=("..\\..\\Cartas\\");
			string dir8=("..\\..\\Cartas\\");
			string dir9=("..\\..\\Cartas\\");
			string dir10=("..\\..\\Cartas\\");
			string dir11=("..\\..\\Cartas\\");
			string dir12=("..\\..\\Cartas\\");
			string dir13=("..\\..\\Cartas\\");
			string dir14=("..\\..\\Cartas\\");
			string dir15=("..\\..\\Cartas\\");
			string dir16=("..\\..\\Cartas\\");
			string dir17=("..\\..\\Cartas\\");
			string dir18=("..\\..\\Cartas\\");
			string dir19=("..\\..\\Cartas\\");
			string dir20=("..\\..\\Cartas\\");
			string dir21=("..\\..\\Cartas\\");
			string dir22=("..\\..\\Cartas\\");
			string dir23=("..\\..\\Cartas\\");
			string dir24=("..\\..\\Cartas\\");
			string dir25=("..\\..\\Cartas\\");
			string dir26=("..\\..\\Cartas\\");
			string dir27=("..\\..\\Cartas\\");
			string dir28=("..\\..\\Cartas\\");
			string dir29=("..\\..\\Cartas\\");
			string dir30=("..\\..\\Cartas\\");
			string dir31=("..\\..\\Cartas\\");
			string dir32=("..\\..\\Cartas\\");
			string dir33=("..\\..\\Cartas\\");
			string dir34=("..\\..\\Cartas\\");
			string dir35=("..\\..\\Cartas\\");
			string dir36=("..\\..\\Cartas\\");
			string dir37=("..\\..\\Cartas\\");
			string dir38=("..\\..\\Cartas\\");
			string dir39=("..\\..\\Cartas\\");
			string dir40=("..\\..\\Cartas\\");
			string dir41=("..\\..\\Cartas\\");
			string dir42=("..\\..\\Cartas\\");
			string dir43=("..\\..\\Cartas\\");
			string dir44=("..\\..\\Cartas\\");
			string dir45=("..\\..\\Cartas\\");
			string dir46=("..\\..\\Cartas\\");
			string dir47=("..\\..\\Cartas\\");
			string dir48=("..\\..\\Cartas\\");
			string dir49=("..\\..\\Cartas\\");
			string dir50=("..\\..\\Cartas\\");
			string dir51=("..\\..\\Cartas\\");
			string dir52=("..\\..\\Cartas\\");

			while (pos<52)
			{
				for (int g=1; g<5; g++)
				{
					if ((g==1) || (g==2))
					{
						color=0;
					} else 
					{
						color=1;
					}

					abc=g;

					if(abc==1)
					{
						std::string s = to_string(abc);
						dir1.append(s);
						dir1.append("-");
						dir2.append(s);
						dir2.append("-");
						dir3.append(s);
						dir3.append("-");
						dir4.append(s);
						dir4.append("-");
						dir5.append(s);
						dir5.append("-");
						dir6.append(s);
						dir6.append("-");
						dir7.append(s);
						dir7.append("-");
						dir8.append(s);
						dir8.append("-");
						dir9.append(s);
						dir9.append("-");
						dir10.append(s);
						dir10.append("-");
						dir11.append(s);
						dir11.append("-");
						dir12.append(s);
						dir12.append("-");
						dir13.append(s);
						dir13.append("-");
					}
					if(abc==2)
					{
						std::string s = to_string(abc);
						dir14.append(s);
						dir14.append("-");
						dir15.append(s);
						dir15.append("-");
						dir16.append(s);
						dir16.append("-");
						dir17.append(s);
						dir17.append("-");
						dir18.append(s);
						dir18.append("-");
						dir19.append(s);
						dir19.append("-");
						dir20.append(s);
						dir20.append("-");
						dir21.append(s);
						dir21.append("-");
						dir22.append(s);
						dir22.append("-");
						dir23.append(s);
						dir23.append("-");
						dir24.append(s);
						dir24.append("-");
						dir25.append(s);
						dir25.append("-");
						dir26.append(s);
						dir26.append("-");
					}
					if(abc==3)
					{
						std::string s = to_string(abc);
						dir27.append(s);
						dir27.append("-");
						dir28.append(s);
						dir28.append("-");
						dir29.append(s);
						dir29.append("-");
						dir30.append(s);
						dir30.append("-");
						dir31.append(s);
						dir31.append("-");
						dir32.append(s);
						dir32.append("-");
						dir33.append(s);
						dir33.append("-");
						dir34.append(s);
						dir34.append("-");
						dir35.append(s);
						dir35.append("-");
						dir36.append(s);
						dir36.append("-");
						dir37.append(s);
						dir37.append("-");
						dir38.append(s);
						dir38.append("-");
						dir39.append(s);
						dir39.append("-");		
					}
					if(abc==4)
					{
						std::string s = to_string(abc);
						dir40.append(s);
						dir40.append("-");
						dir41.append(s);
						dir41.append("-");
						dir42.append(s);
						dir42.append("-");
						dir43.append(s);
						dir43.append("-");
						dir44.append(s);
						dir44.append("-");
						dir45.append(s);
						dir45.append("-");
						dir46.append(s);
						dir46.append("-");
						dir47.append(s);
						dir47.append("-");
						dir48.append(s);
						dir48.append("-");
						dir49.append(s);
						dir49.append("-");
						dir50.append(s);
						dir50.append("-");
						dir51.append(s);
						dir51.append("-");
						dir52.append(s);
						dir52.append("-");
					
					}
					
					for (int v=1; v<14; v++)
					{
						xyz=v;

						if (xyz==1)
						{
							std::string ss = to_string(xyz);
							if (g==1)
							{
								dir1.append(ss);
								dir1.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir1, back, 100, 100);
								pos++;
							}
							if (g==2)
							{
								dir14.append(ss);
								dir14.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir14, back, 100,100);
								pos++;
							}
							if (g==3)
							{
								dir27.append(ss);
								dir27.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir27, back, 100,100);
								pos++;
							}
							if (g==4)
							{
								dir40.append(ss);
								dir40.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir40, back, 100,100);
								pos++;
							}
						}
						if (xyz==2)
						{
							std::string ss = to_string(xyz);
							if (g==1)
							{
								dir2.append(ss);
								dir2.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir2, back, 100, 100);
								pos++;
							}
							if (g==2)
							{
								dir15.append(ss);
								dir15.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir15, back,100,100);
								pos++;
							}
							if (g==3)
							{
								dir28.append(ss);
								dir28.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir28, back,100,100);
								pos++;
							}
							if (g==4)
							{
								dir41.append(ss);
								dir41.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir41, back, 100,100);
								pos++;
							}
						}
						if (xyz==3)
						{
							std::string ss = to_string(xyz);
							if (g==1)
							{
								dir3.append(ss);
								dir3.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir3, back, 100, 100);
								pos++;
							}
							if (g==2)
							{
								dir16.append(ss);
								dir16.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir16, back,100,100);
								pos++;
							}
							if (g==3)
							{
								dir29.append(ss);
								dir29.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir29, back,100,100);
								pos++;
							}
							if (g==4)
							{
								dir42.append(ss);
								dir42.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir42, back,100,100);
								pos++;
							}
						}
						if (xyz==4)
						{
							std::string ss = to_string(xyz);
							if (g==1)
							{
								dir4.append(ss);
								dir4.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir4, back, 100, 100);
								pos++;
							}
							if (g==2)
							{
								dir17.append(ss);
								dir17.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir17, back,100,100);
								pos++;
							}
							if (g==3)
							{
								dir30.append(ss);
								dir30.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir30, back,100,100);
								pos++;
							}
							if (g==4)
							{
								dir43.append(ss);
								dir43.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir43, back,100,100);
								pos++;
							}
						}
						if (xyz==5)
						{
							std::string ss = to_string(xyz);
							if (g==1)
							{
								dir5.append(ss);
								dir5.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir5,back, 100, 100);
								pos++;
							}
							if (g==2)
							{
								dir18.append(ss);
								dir18.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir18, back,100,100);
								pos++;
							}
							if (g==3)
							{
								dir31.append(ss);
								dir31.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir31, back,100,100);
								pos++;
							}
							if (g==4)
							{
								dir44.append(ss);
								dir44.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir44, back,100,100);
								pos++;
							}
						}
						if (xyz==6)
						{
							std::string ss = to_string(xyz);
							if (g==1)
							{
								dir6.append(ss);
								dir6.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir6,back, 100, 100);
								pos++;
							}
							if (g==2)
							{
								dir19.append(ss);
								dir19.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir19, back,100,100);
								pos++;
							}
							if (g==3)
							{
								dir32.append(ss);
								dir32.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir32, back,100,100);
								pos++;
							}
							if (g==4)
							{
								dir45.append(ss);
								dir45.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir45, back,100,100);
								pos++;
							}
						}
						if (xyz==7)
						{
							std::string ss = to_string(xyz);
							if (g==1)
							{
								dir7.append(ss);
								dir7.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir7, back, 100, 100);
								pos++;
							}
							if (g==2)
							{
								dir20.append(ss);
								dir20.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir20, back,100,100);
								pos++;
							}
							if (g==3)
							{
								dir33.append(ss);
								dir33.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir33, back,100,100);
								pos++;
							}
							if (g==4)
							{
								dir46.append(ss);
								dir46.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir46, back,100,100);
								pos++;
							}
						}
						if (xyz==8)
						{
							std::string ss = to_string(xyz);
							if (g==1)
							{
								dir8.append(ss);
								dir8.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir8,back, 100, 100);
								pos++;
							}
							if (g==2)
							{
								dir21.append(ss);
								dir21.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir21, back,100,100);
								pos++;
							}
							if (g==3)
							{
								dir34.append(ss);
								dir34.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir34, back,100,100);
								pos++;
							}
							if (g==4)
							{
								dir47.append(ss);
								dir47.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir47, back,100,100);
								pos++;
							}
						}
						if (xyz==9)
						{
							std::string ss = to_string(xyz);
							if (g==1)
							{
								dir9.append(ss);
								dir9.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir9, back, 100, 100);
								pos++;
							}
							if (g==2)
							{
								dir22.append(ss);
								dir22.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir22, back, 100,100);
								pos++;
							}
							if (g==3)
							{
								dir35.append(ss);
								dir35.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir35, back,100,100);
								pos++;
							}
							if (g==4)
							{
								dir48.append(ss);
								dir48.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir48, back,100,100);
								pos++;
							}
						}
						if (xyz==10)
						{
							std::string ss = to_string(xyz);
							if (g==1)
							{
								dir10.append(ss);
								dir10.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir10, back, 100, 100);
								pos++;
							}
							if (g==2)
							{
								dir23.append(ss);
								dir23.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir23, back,100,100);
								pos++;
							}
							if (g==3)
							{
								dir36.append(ss);
								dir36.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir36, back,100,100);
								pos++;
							}
							if (g==4)
							{
								dir49.append(ss);
								dir49.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir49, back,100,100);
								pos++;
							}
						}
						if (xyz==11)
						{
							std::string ss = to_string(xyz);
							if (g==1)
							{
								dir11.append(ss);
								dir11.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir11, back, 100, 100);
								pos++;
							}
							if (g==2)
							{
								dir24.append(ss);
								dir24.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir24, back,100,100);
								pos++;
							}
							if (g==3)
							{
								dir37.append(ss);
								dir37.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir37, back,100,100);
								pos++;
							}
							if (g==4)
							{
								dir50.append(ss);
								dir50.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir50, back,100,100);
								pos++;
							}
						}
						if (xyz==12)
						{
							std::string ss = to_string(xyz);
							if (g==1)
							{
								dir12.append(ss);
								dir12.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir12, back, 100, 100);
								pos++;
							}
							if (g==2)
							{
								dir25.append(ss);
								dir25.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir25, back,100,100);
								pos++;
							}
							if (g==3)
							{
								dir38.append(ss);
								dir38.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir38, back,100,100);
								pos++;
							}
							if (g==4)
							{
								dir51.append(ss);
								dir51.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir51, back,100,100);
								pos++;
							}
						}
						if (xyz==13)
						{
							std::string ss = to_string(xyz);
							if (g==1)
							{
								dir13.append(ss);
								dir13.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir13,back, 100, 100);
								pos++;
							}
							if (g==2)
							{
								dir26.append(ss);
								dir26.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir26,back,100,100);
								pos++;
							}
							if (g==3)
							{
								dir39.append(ss);
								dir39.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir39,back,100,100);
								pos++;
							}
							if (g==4)
							{
								dir52.append(ss);
								dir52.append(".jpg");
								baraja[pos]=new Carta(v, g, color, dir52,back,100,100);
								pos++;
							}
						}

					}
				}
			}

			int randcards=1;
			int random=0;
			int p1=0,p2=0,p3=0,p4=0,p5=0,p6=0,p7=0;

			srand(time(NULL));

			while (randcards<29)
			{
				random= (rand() % 51);
				if (bar[random])
				{
					bar[random]=false;
					randcards++;
					
					if (p1<1)
					{
						r1.Push(baraja[random]);
						p1++;
					}else if (p2<2)
					{
						r2.Push(baraja[random]);
						p2++;
					}else if (p3<3)
					{
						r3.Push(baraja[random]);
						p3++;
					}else if (p4<4)
					{
						r4.Push(baraja[random]);
						p4++;
					}else if (p5<5)
					{
						r5.Push(baraja[random]);
						p5++;
					}else if (p6<6)
					{
						r6.Push(baraja[random]);
						p6++;
					}else if (p7<7)
					{
						r7.Push(baraja[random]);
						p7++;
					}
				}
			}

			for (int ii=0; ii<52; ii++)
			{
				if (bar[ii])
				{
					bar[ii]=false;
					rrr.Push(baraja[ii]);
				}
			}

			barajaccc.Insertar(rrr.PopR2(21));
			barajaccc.Insertar(rrr.PopR2(2));
			barajaccc.Insertar(rrr.PopR2(18));
			barajaccc.Insertar(rrr.PopR2(10));
			barajaccc.Insertar(rrr.PopR2(15));
			barajaccc.Insertar(rrr.PopR2(3));
			barajaccc.Insertar(rrr.PopR2(14));
			barajaccc.Insertar(rrr.PopR2(9));
			barajaccc.Insertar(rrr.PopR2(13));
			barajaccc.Insertar(rrr.PopR2(3));
			barajaccc.Insertar(rrr.PopR2(8));
			barajaccc.Insertar(rrr.PopR2(5));
			barajaccc.Insertar(rrr.PopR1());
			barajaccc.Insertar(rrr.PopR1());
			barajaccc.Insertar(rrr.PopR1());
			barajaccc.Insertar(rrr.PopR1());
			barajaccc.Insertar(rrr.PopR2(3));
			barajaccc.Insertar(rrr.PopR1());
			barajaccc.Insertar(rrr.PopR1());
			barajaccc.Insertar(rrr.PopR1());
			barajaccc.Insertar(rrr.PopR1());
			barajaccc.Insertar(rrr.PopR1());
			barajaccc.Insertar(rrr.PopR1());
			barajaccc.Insertar(rrr.PopR1());


		}

		bool Juego::RevisarBar()
		{
			bool x=true;
			for (int i=0; i<52; i++)
			{
				if (bar[i]==false)
				{
					x=false;
				}
			}
			return x;
		}

};