#include <iostream>
#include <string>
using namespace std;
  
// Иерархия классов, определяющая алгоритмы сжатия файлов
class Compression
{
  public:    
    virtual ~Compression() {}
    virtual void compress( const string & file ) = 0;
};
  
class ZIP_Compression : public Compression
{
  public:
    virtual void compress( const string & file ) {
        cout << "ZIP compression" << endl;
    }
};
  
class ARJ_Compression : public Compression
{
  public:
    virtual void compress( const string & file ) {
        cout << "ARJ compression" << endl;
    }
};
  
class RAR_Compression : public Compression
{
  public:
    virtual void compress( const string & file ) {
        cout << "RAR compression" << endl;
    }
};
  
  
// Класс для использования
class Compressor 
{
  public:
    Compressor( Compression* comp): p(comp) {}
   ~Compressor() { delete p; }
    void compress( const string & file ) {
      p->compress( file);
    }
    void substituteCompression(Compression* comp){p=comp;}
  private:
    Compression* p;
};
 int main()
{
  Compressor* c1 = new Compressor(new ZIP_Compression);
  c1->compress( "file.txt");
  c1->substituteCompression(new RAR_Compression);
  c1->compress( "flower.txt");
  delete c1;
  return 0;
}
