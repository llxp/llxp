#define field_a  4
#define field_b 1024
#define field_c 1024
//#define ROWLEN 20
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcs.h"
#include "htmlfuncs.h"
#include "arrays.h"
//#include "tags.h"
#include "mysql_funcs.h"
#include <time.h>
#include <regex.h>

//#define MASTERhash_long "209946ba7f865be79cbf0d93175de8e98ed2d47dfc0ffb53dbe0dd38f6b3ffadc2b306c91e15af5635dce2c194a22344ebf465708442ac93ab0e5e1d3f750c84"
char *masterhash="47a1c3a508d4dd527f28ff28195a5990";


char puffer_[field_c];
int field[field_a][field_b][field_c], setpoint, player[field_a][field_b][field_c];
int a, b, c, d, e, f, g, h, i, j, k, l, /*m, n,*/ o, p, q, r, s, t, u, v, w, x, y, z, word, string, counter_putintable, column, column_, row_pit, row_, lastrowx, mode, limiter, limiter_, limiter_column/*, puffer_*/, check, zahl, pos, false_var_error, false_var_error_=0, ggv_c;
char character[1], character__[sizeof(field_c)];
char character_, file_;
char content[field_c];
char *zero = "13";
FILE *file;
//char puffer[ROWLEN], puffer__[ROWLEN];
int lastrow = -1;
char *var;
char *getvar = "";
unsigned long size;
char *var_copy, *puffer_x, *request,*cont_len, *cgi_string;
char *ausgabe_string="", *ausgabe_content="";
char *post_var;
int content_length;
char *content_post=NULL;
int error = 0;
char *_GET[255][2];
char *_POST[255][2];
//char *$_GET;

//Funktions├╝bersicht
void print_header(void);
void print_html_header(char *titel);
int add_tag(char *tag, char *attr);
int print_html(char *html);
int print_content(char *content);
void print_footer();
int saver(char *file_);
int loader(char *file_);
int from_where(char *search);
int putintable(char *character_, int *column, int *row_pit/*, int player[4][64][100]*/);
int putintable_inlast(char *content, int column_);
int print_field(int field[field_a][field_b][field_c], int mode, int limiter_row, int limiter_column, int limiter_);
int init(void);
//Funktions├╝bersicht

typedef struct knoten KNOTEN;


//MYSQL
MYSQL *conn;
MYSQL_RES *res;
MYSQL_ROW row;

char *server = "localhost";
char *user = "root";
char *password = "AdmiN1995";
char *database = "test";

