#include<iostream>
#include<fstream>

using namespace std;

ifstream infile("Tetris.data",ios::in);
ofstream outfile("Tetris.output",ios::out);

class Tetris{
    public:
        Tetris(int m,int n){
            rows = m;
            cols = n;
            t_map = new bool*[m+4];
            for(int i=0;i<m+4;i++){
                t_map[i] = new bool[n];
            }
        }

        ~Tetris(){
            for(int i=0;i<rows+4;i++){
                delete []t_map[i];
            }
            delete []t_map;
            rows = 0;
            cols = 0;
        }

        void set_map(){
            for(int i=0;i<rows+4;i++){
                for(int j=0;j<cols;j++){
                    t_map[i][j] = 0;
                }
            }
        }

        void print_map(){
            //outfile<<endl;
            //outfile<<"the map:"<<endl;
            for(int i=4;i<rows+4;i++){
                for(int j=0;j<cols;j++){
                    outfile<<t_map[i][j];
                }
                outfile<<endl;
            }
        }

        void get_cmd(){
            infile>>cmd;
            //cout<<cmd<<endl;
            if(cmd == "T1"){
                int i;
                infile>>i;
                this->fall_T1(i-1);
                //this->print_map();
                if(this->end_judge() == 1)return;
                this->get_cmd();
            }
            else if(cmd == "T2"){
                int i;
                infile>>i;
                this->fall_T2(i-1);
                //this->print_map();
                if(this->end_judge() == 1)return;
                this->get_cmd();
            }
            else if(cmd == "T3"){
                int i;
                infile>>i;
                this->fall_T3(i-1);
                //this->print_map();
                if(this->end_judge() == 1)return;
                this->get_cmd();
            }
            else if(cmd == "T4"){
                int i;
                infile>>i;
                this->fall_T4(i-1);
                //this->print_map();
                if(this->end_judge() == 1)return;
                this->get_cmd();
            }
            //

            else if(cmd == "L1"){
                int i;
                infile>>i;
                this->fall_L1(i-1);
                //this->print_map();
                if(this->end_judge() == 1)return;
                this->get_cmd();
            }
            else if(cmd == "L2"){
                int i;
                infile>>i;
                this->fall_L2(i-1);
                //this->print_map();
                if(this->end_judge() == 1)return;
                this->get_cmd();
            }
            else if(cmd == "L3"){
                int i;
                infile>>i;
                this->fall_L3(i-1);
                //this->print_map();
                if(this->end_judge() == 1)return;
                this->get_cmd();
            }
            else if(cmd == "L4"){
                int i;
                infile>>i;
                this->fall_L4(i-1);
                //this->print_map();
                if(this->end_judge() == 1)return;
                this->get_cmd();
            }

            //

            else if(cmd == "J1"){
                int i;
                infile>>i;
                this->fall_J1(i-1);
                //this->print_map();
                if(this->end_judge() == 1)return;
                this->get_cmd();
            }
            else if(cmd == "J2"){
                int i;
                infile>>i;
                this->fall_J2(i-1);
                //this->print_map();
                if(this->end_judge() == 1)return;
                this->get_cmd();
            }
            else if(cmd == "J3"){
                int i;
                infile>>i;
                this->fall_J3(i-1);
                //this->print_map();
                if(this->end_judge() == 1)return;
                this->get_cmd();
            }
            else if(cmd == "J4"){
                int i;
                infile>>i;
                this->fall_J4(i-1);
                //this->print_map();
                if(this->end_judge() == 1)return;
                this->get_cmd();
            }

            //

            else if(cmd == "S1"){
                int i;
                infile>>i;
                this->fall_S1(i-1);
                //this->print_map();
                if(this->end_judge() == 1)return;
                this->get_cmd();
            }
            else if(cmd == "S2"){
                int i;
                infile>>i;
                this->fall_S2(i-1);
                //this->print_map();
                if(this->end_judge() == 1)return;
                this->get_cmd();
            }
            else if(cmd == "Z1"){
                int i;
                infile>>i;
                this->fall_Z1(i-1);
                //this->print_map();
                if(this->end_judge() == 1)return;
                this->get_cmd();
            }
            else if(cmd == "Z2"){
                int i;
                infile>>i;
                this->fall_Z2(i-1);
                //this->print_map();
                if(this->end_judge() == 1)return;
                this->get_cmd();
            }

            //

            else if(cmd == "I1"){
                int i;
                infile>>i;
                this->fall_I1(i-1);
                //this->print_map();
                if(this->end_judge() == 1)return;
                this->get_cmd();
            }
            else if(cmd == "I2"){
                int i;
                infile>>i;
                this->fall_I2(i-1);
                //this->print_map();
                if(this->end_judge() == 1)return;
                this->get_cmd();
            }
            else if(cmd == "O"){
                int i;
                infile>>i;
                this->fall_O(i-1);
                //this->print_map();
                if(this->end_judge() == 1)return;
                this->get_cmd();
            }
            else if(cmd == "End"){
                this->print_map();
            }
        }

        void fall_T1(const int tar_col);
        void fall_T2(const int tar_col);
        void fall_T3(const int tar_col);
        void fall_T4(const int tar_col);
        //
        void fall_L1(const int tar_col);
        void fall_L2(const int tar_col);
        void fall_L3(const int tar_col);
        void fall_L4(const int tar_col);
        //
        void fall_J1(const int tar_col);
        void fall_J2(const int tar_col);
        void fall_J3(const int tar_col);
        void fall_J4(const int tar_col);
        //
        void fall_S1(const int tar_col);
        void fall_S2(const int tar_col);
        void fall_Z1(const int tar_col);
        void fall_Z2(const int tar_col);
        //
        void fall_I1(const int tar_col);
        void fall_I2(const int tar_col);
        void fall_O(const int tar_col);
        void check_row(const int tar_row);
        void delete_row(const int tar_row);
        bool end_judge();

    private:
        bool** t_map;
        int rows;
        int cols;
        string cmd;
};


void check_row(bool**,const int,const int,const int);
void delete_row(bool**,const int,const int,const int);

int main()
{
    int m,n;
    infile>>m>>n;
    //cout<<m<<"  "<<n<<endl;
    Tetris ter(m,n);

    ter.set_map();
    //ter.print_map();

    ter.get_cmd();

    //


    return 0;
}

void Tetris::fall_O(const int tar_col)
{
    /*cout<<"block O is falling"<<endl;
    if(tar_col+1 >= cols){
        cout<<"block O is out of the map!"<<endl;
        return ;
    }*/
    int i=1;

    while(i<rows+4){
        if(t_map[i][tar_col] == 0 && t_map[i][tar_col+1] == 0)i++;
        else break;
    }
    //cout<<"now i is : "<<i-3<<endl;

    if(i >= rows+4){
        //cout<<"i is fall out of map"<<endl;
        i--;
        t_map[i][tar_col] = 1;
        t_map[i][tar_col+1] = 1;
        t_map[i-1][tar_col] = 1;
        t_map[i-1][tar_col+1] = 1;
    }
    else if(t_map[i][tar_col] == 1 || t_map[i][tar_col+1] == 1){
        i--;
        t_map[i][tar_col] = 1;
        t_map[i][tar_col+1] = 1;
        t_map[i-1][tar_col] = 1;
        t_map[i-1][tar_col+1] = 1;
    }
    //cout<<"block O is setted"<<endl;
    this->check_row(i-1);
    this->check_row(i);
}

void Tetris::fall_I1(const int tar_col)
{
    /*cout<<"block I1 is falling"<<endl;
    if(tar_col >= cols){
        cout<<"block I1 is out of the map!"<<endl;
        return ;
    }*/
    int i=3;

    while(i<rows+4){
        if(t_map[i][tar_col] == 0)i++;
        else break;
    }
    //cout<<"now i is : "<<i-3<<endl;

    if(i >= rows+4){
        //cout<<"i is fall out of map"<<endl;
        i--;
        t_map[i][tar_col] = 1;
        t_map[i-1][tar_col] = 1;
        t_map[i-2][tar_col] = 1;
        t_map[i-3][tar_col] = 1;
    }
    else if(t_map[i][tar_col] == 1){
        i--;
        t_map[i][tar_col] = 1;
        t_map[i-1][tar_col] = 1;
        t_map[i-2][tar_col] = 1;
        t_map[i-3][tar_col] = 1;
    }
    //cout<<"block I1 is setted"<<endl;
    this->check_row(i-3);
    this->check_row(i-2);
    this->check_row(i-1);
    this->check_row(i);
}

void Tetris::fall_I2(const int tar_col)
{
    /*cout<<"block I2 is falling"<<endl;
    if(tar_col+3 >= cols){
        cout<<"block I2 is out of the map!"<<endl;
        return ;
    }*/
    int i=0;

    while(i<rows+4){
        if(t_map[i][tar_col] == 0 && t_map[i][tar_col+1] == 0 &&t_map[i][tar_col+2] == 0 &&t_map[i][tar_col+3] == 0)i++;
        else break;
    }
    //cout<<"now i is : "<<i-3<<endl;

    if(i >= rows+4){
        //cout<<"i is fall out of map"<<endl;
        i--;
        t_map[i][tar_col] = 1;
        t_map[i][tar_col+1] = 1;
        t_map[i][tar_col+2] = 1;
        t_map[i][tar_col+3] = 1;
    }
    else if(t_map[i][tar_col] == 1 || t_map[i][tar_col+1] == 1 || t_map[i][tar_col+2] == 1 || t_map[i][tar_col+3] == 1){
        i--;
        t_map[i][tar_col] = 1;
        t_map[i][tar_col+1] = 1;
        t_map[i][tar_col+2] = 1;
        t_map[i][tar_col+3] = 1;
    }
    //cout<<"block I2 is setted"<<endl;
    this->check_row(i);
}

void Tetris::fall_T1(const int tar_col)
{
    /*cout<<"block T1 is falling"<<endl;
    if(tar_col+2 >= cols){
        cout<<"block T1 is out of the map!"<<endl;
        return ;
    }*/
    int i=1;

    while(i<rows+4){
        if(t_map[i-1][tar_col] == 0 && t_map[i][tar_col+1] == 0 && t_map[i-1][tar_col+2] == 0)i++;
        else break;
    }
    //cout<<"now i is : "<<i-3<<endl;

    if(i >= rows+4){
        //cout<<"i is fall out of map"<<endl;
        i--;
        t_map[i-1][tar_col] = 1;
        t_map[i-1][tar_col+1] = 1;
        t_map[i-1][tar_col+2] = 1;
        t_map[i][tar_col+1] = 1;
    }
    else if(t_map[i-1][tar_col] == 1 || t_map[i][tar_col+1] == 1 ||t_map[i-1][tar_col+2] == 1){
        i--;
        t_map[i-1][tar_col] = 1;
        t_map[i-1][tar_col+1] = 1;
        t_map[i-1][tar_col+2] = 1;
        t_map[i][tar_col+1] = 1;
    }
    //cout<<"block T1 is setted"<<endl;
    this->check_row(i-1);
    this->check_row(i);
}

void Tetris::fall_T2(const int tar_col)
{
    /*cout<<"block T2 is falling"<<endl;
    if(tar_col+1 >= cols){
        cout<<"block T2 is out of the map!"<<endl;
        return ;
    }*/
    int i=2;

    while(i<rows+4){
        if(t_map[i-1][tar_col] == 0 && t_map[i][tar_col+1] == 0)i++;
        else break;
    }
    //cout<<"now i is : "<<i-3<<endl;

    if(i >= rows+4){
        //cout<<"i is fall out of map"<<endl;
        i--;
        t_map[i-2][tar_col+1] = 1;
        t_map[i-1][tar_col] = 1;
        t_map[i-1][tar_col+1] = 1;
        t_map[i][tar_col+1] = 1;
    }
    else if(t_map[i-1][tar_col] == 1 || t_map[i][tar_col+1] == 1){
        i--;
        t_map[i-2][tar_col+1] = 1;
        t_map[i-1][tar_col] = 1;
        t_map[i-1][tar_col+1] = 1;
        t_map[i][tar_col+1] = 1;
    }
    //cout<<"block T2 is setted"<<endl;
    this->check_row(i-2);
    this->check_row(i-1);
    this->check_row(i);
}

void Tetris::fall_T3(const int tar_col)
{
    /*cout<<"block T3 is falling"<<endl;
    if(tar_col+2 >= cols){
        cout<<"block T3 is out of the map!"<<endl;
        return ;
    }*/
    int i=1;

    while(i<rows+4){
        if(t_map[i][tar_col] == 0 && t_map[i][tar_col+1] == 0 &&t_map[i][tar_col+2] == 0 )i++;
        else break;
    }
    //cout<<"now i is : "<<i-3<<endl;

    if(i >= rows+4){
        //cout<<"i is fall out of map"<<endl;
        i--;
        t_map[i][tar_col] = 1;
        t_map[i][tar_col+1] = 1;
        t_map[i][tar_col+2] = 1;
        t_map[i-1][tar_col+1] = 1;
    }
    else if(t_map[i][tar_col] == 1 || t_map[i][tar_col+1] == 1 || t_map[i][tar_col+2] == 1 ){
        i--;
        t_map[i][tar_col] = 1;
        t_map[i][tar_col+1] = 1;
        t_map[i][tar_col+2] = 1;
        t_map[i-1][tar_col+1] = 1;
    }
    //cout<<"block T3 is setted"<<endl;
    this->check_row(i-1);
    this->check_row(i);
}

void Tetris::fall_T4(const int tar_col)
{
    /*cout<<"block T4 is falling"<<endl;
    if(tar_col+1 >= cols){
        cout<<"block T4 is out of the map!"<<endl;
        return ;
    }*/
    int i=2;

    while(i<rows+4){
        if(t_map[i][tar_col] == 0 && t_map[i-1][tar_col+1] == 0)i++;
        else break;
    }
    //cout<<"now i is : "<<i-3<<endl;

    if(i >= rows+4){
        //cout<<"i is fall out of map"<<endl;
        i--;
        t_map[i][tar_col] = 1;
        t_map[i-1][tar_col] = 1;
        t_map[i-2][tar_col] = 1;
        t_map[i-1][tar_col+1] = 1;
    }
    else if(t_map[i][tar_col] == 1 || t_map[i-1][tar_col+1] == 1){
        i--;
        t_map[i][tar_col] = 1;
        t_map[i-1][tar_col] = 1;
        t_map[i-2][tar_col] = 1;
        t_map[i-1][tar_col+1] = 1;
    }
    //cout<<"block T4 is setted"<<endl;
    this->check_row(i-2);
    this->check_row(i-1);
    this->check_row(i);
}

void Tetris::fall_L1(const int tar_col)
{
    /*cout<<"block L1 is falling"<<endl;
    if(tar_col+1 >= cols){
        cout<<"block L1 is out of the map!"<<endl;
        return ;
    }*/
    int i=2;

    while(i<rows+4){
        if(t_map[i][tar_col] == 0 && t_map[i][tar_col+1] == 0)i++;
        else break;
    }
    //cout<<"now i is : "<<i-3<<endl;

    if(i >= rows+4){
        //cout<<"i is fall out of map"<<endl;
        i--;
        t_map[i][tar_col] = 1;
        t_map[i][tar_col+1] = 1;
        t_map[i-1][tar_col] = 1;
        t_map[i-2][tar_col] = 1;
    }
    else if(t_map[i][tar_col] == 1 || t_map[i][tar_col+1] == 1){
        i--;
        t_map[i][tar_col] = 1;
        t_map[i][tar_col+1] = 1;
        t_map[i-1][tar_col] = 1;
        t_map[i-2][tar_col] = 1;
    }
    //cout<<"block L1 is setted"<<endl;
    this->check_row(i-2);
    this->check_row(i-1);
    this->check_row(i);
}

void Tetris::fall_L2(const int tar_col)
{
    /*cout<<"block L2 is falling"<<endl;
    if(tar_col+2 >= cols){
        cout<<"block L2 is out of the map!"<<endl;
        return ;
    }*/
    int i=1;

    while(i<rows+4){
        if(t_map[i][tar_col] == 0 && t_map[i-1][tar_col+1] == 0 && t_map[i-1][tar_col+2] == 0 )i++;
        else break;
    }
    //cout<<"now i is : "<<i-3<<endl;

    if(i >= rows+4){
        //cout<<"i is fall out of map"<<endl;
        i--;
        t_map[i][tar_col] = 1;
        t_map[i-1][tar_col] = 1;
        t_map[i-1][tar_col+1] = 1;
        t_map[i-1][tar_col+2] = 1;
    }
    else if(t_map[i][tar_col] == 1 || t_map[i-1][tar_col+1] == 1 || t_map[i-1][tar_col+2] == 1 ){
        i--;
        t_map[i][tar_col] = 1;
        t_map[i-1][tar_col] = 1;
        t_map[i-1][tar_col+1] = 1;
        t_map[i-1][tar_col+2] = 1;
    }
    //cout<<"block L2 is setted"<<endl;
    this->check_row(i-1);
    this->check_row(i);
}

void Tetris::fall_L3(const int tar_col)
{
    /*cout<<"block L3 is falling"<<endl;
    if(tar_col+1 >= cols){
        cout<<"block L3 is out of the map!"<<endl;
        return ;
    }*/
    int i=2;

    while(i<rows+4){
        if(t_map[i-2][tar_col] == 0 && t_map[i][tar_col+1] == 0)i++;
        else break;
    }
    //cout<<"now i is : "<<i-3<<endl;

    if(i >= rows+4){
        //cout<<"i is fall out of map"<<endl;
        i--;
        t_map[i-2][tar_col] = 1;
        t_map[i-2][tar_col+1] = 1;
        t_map[i-1][tar_col+1] = 1;
        t_map[i][tar_col+1] = 1;
    }
    else if(t_map[i-2][tar_col] == 1 || t_map[i][tar_col+1] == 1){
        i--;
        t_map[i-2][tar_col] = 1;
        t_map[i-2][tar_col+1] = 1;
        t_map[i-1][tar_col+1] = 1;
        t_map[i][tar_col+1] = 1;
    }
    //cout<<"block L3 is setted"<<endl;
    this->check_row(i-2);
    this->check_row(i-1);
    this->check_row(i);
}

void Tetris::fall_L4(const int tar_col)
{
    /*cout<<"block L4 is falling"<<endl;
    if(tar_col+2 >= cols){
        cout<<"block L4 is out of the map!"<<endl;
        return ;
    }*/
    int i=1;

    while(i<rows+4){
        if(t_map[i][tar_col] == 0 && t_map[i][tar_col+1] == 0 &&t_map[i][tar_col+2] == 0 )i++;
        else break;
    }
    //cout<<"now i is : "<<i-3<<endl;

    if(i >= rows+4){
        //cout<<"i is fall out of map"<<endl;
        i--;
        t_map[i][tar_col] = 1;
        t_map[i][tar_col+1] = 1;
        t_map[i][tar_col+2] = 1;
        t_map[i-1][tar_col+2] = 1;
    }
    else if(t_map[i][tar_col] == 1 || t_map[i][tar_col+1] == 1 || t_map[i][tar_col+2] == 1 ){
        i--;
        t_map[i][tar_col] = 1;
        t_map[i][tar_col+1] = 1;
        t_map[i][tar_col+2] = 1;
        t_map[i-1][tar_col+2] = 1;
    }
    //cout<<"block L4 is setted"<<endl;
    this->check_row(i-1);
    this->check_row(i);
}

void Tetris::fall_J1(const int tar_col)
{
    /*cout<<"block J1 is falling"<<endl;
    if(tar_col+1 >= cols){
        cout<<"block J1 is out of the map!"<<endl;
        return ;
    }*/
    int i=2;

    while(i<rows+4){
        if(t_map[i][tar_col] == 0 && t_map[i][tar_col+1] == 0)i++;
        else break;
    }
    //cout<<"now i is : "<<i-3<<endl;

    if(i >= rows+4){
        //cout<<"i is fall out of map"<<endl;
        i--;
        t_map[i][tar_col] = 1;
        t_map[i][tar_col+1] = 1;
        t_map[i-1][tar_col+1] = 1;
        t_map[i-2][tar_col+1] = 1;
    }
    else if(t_map[i][tar_col] == 1 || t_map[i][tar_col+1] == 1){
        i--;
        t_map[i][tar_col] = 1;
        t_map[i][tar_col+1] = 1;
        t_map[i-1][tar_col+1] = 1;
        t_map[i-2][tar_col+1] = 1;
    }
    //cout<<"block J1 is setted"<<endl;
    this->check_row(i-2);
    this->check_row(i-1);
    this->check_row(i);
}

void Tetris::fall_J2(const int tar_col)
{
    /*cout<<"block J2 is falling"<<endl;
    if(tar_col+2 >= cols){
        cout<<"block J2 is out of the map!"<<endl;
        return ;
    }*/
    int i=1;

    while(i<rows+4){
        if(t_map[i][tar_col] == 0 && t_map[i][tar_col+1] == 0 &&t_map[i][tar_col+2] == 0 )i++;
        else break;
    }
    //cout<<"now i is : "<<i-3<<endl;

    if(i >= rows+4){
        //cout<<"i is fall out of map"<<endl;
        i--;
        t_map[i][tar_col] = 1;
        t_map[i][tar_col+1] = 1;
        t_map[i][tar_col+2] = 1;
        t_map[i-1][tar_col] = 1;
    }
    else if(t_map[i][tar_col] == 1 || t_map[i][tar_col+1] == 1 || t_map[i][tar_col+2] == 1 ){
        i--;
        t_map[i][tar_col] = 1;
        t_map[i][tar_col+1] = 1;
        t_map[i][tar_col+2] = 1;
        t_map[i-1][tar_col] = 1;
    }
    //cout<<"block J2 is setted"<<endl;
    this->check_row(i-1);
    this->check_row(i);
}

void Tetris::fall_J3(const int tar_col)
{
    /*cout<<"block J3 is falling"<<endl;
    if(tar_col+1 >= cols){
        cout<<"block J3 is out of the map!"<<endl;
        return ;
    }*/
    int i=2;

    while(i<rows+4){
        if(t_map[i-2][tar_col+1] == 0 && t_map[i][tar_col] == 0)i++;
        else break;
    }
    //cout<<"now i is : "<<i-3<<endl;

    if(i >= rows+4){
        //cout<<"i is fall out of map"<<endl;
        i--;
        t_map[i-2][tar_col] = 1;
        t_map[i-2][tar_col+1] = 1;
        t_map[i-1][tar_col] = 1;
        t_map[i][tar_col] = 1;
    }
    else if(t_map[i-2][tar_col+1] == 1 || t_map[i][tar_col] == 1){
        i--;
        t_map[i-2][tar_col] = 1;
        t_map[i-2][tar_col+1] = 1;
        t_map[i-1][tar_col] = 1;
        t_map[i][tar_col] = 1;
    }
    //cout<<"block J3 is setted"<<endl;
    this->check_row(i-2);
    this->check_row(i-1);
    this->check_row(i);
}

void Tetris::fall_J4(const int tar_col)
{
    /*cout<<"block J4 is falling"<<endl;
    if(tar_col+2 >= cols){
        cout<<"block J4 is out of the map!"<<endl;
        return ;
    }*/
    int i=1;

    while(i<rows+4){
        if(t_map[i-1][tar_col] == 0 && t_map[i-1][tar_col+1] == 0 && t_map[i][tar_col+2] == 0 )i++;
        else break;
    }
    //cout<<"now i is : "<<i-3<<endl;

    if(i >= rows+4){
        //cout<<"i is fall out of map"<<endl;
        i--;
        t_map[i][tar_col+2] = 1;
        t_map[i-1][tar_col] = 1;
        t_map[i-1][tar_col+1] = 1;
        t_map[i-1][tar_col+2] = 1;
    }
    else if(t_map[i-1][tar_col] == 1 || t_map[i-1][tar_col+1] == 1 || t_map[i][tar_col+2] == 1 ){
        i--;
        t_map[i][tar_col+2] = 1;
        t_map[i-1][tar_col] = 1;
        t_map[i-1][tar_col+1] = 1;
        t_map[i-1][tar_col+2] = 1;
    }
    //cout<<"block J4 is setted"<<endl;
    this->check_row(i-1);
    this->check_row(i);
}

void Tetris::fall_S1(const int tar_col)
{
    /*cout<<"block S1 is falling"<<endl;
    if(tar_col+2 >= cols){
        cout<<"block S1 is out of the map!"<<endl;
        return ;
    }*/
    int i=1;

    while(i<rows+4){
        if(t_map[i][tar_col] == 0 && t_map[i][tar_col+1] == 0 && t_map[i-1][tar_col+2] == 0)i++;
        else break;
    }
    //cout<<"now i is : "<<i-3<<endl;

    if(i >= rows+4){
        //cout<<"i is fall out of map"<<endl;
        i--;
        t_map[i][tar_col] = 1;
        t_map[i][tar_col+1] = 1;
        t_map[i-1][tar_col+1] = 1;
        t_map[i-1][tar_col+2] = 1;
    }
    else if(t_map[i][tar_col] == 1 || t_map[i][tar_col+1] == 1 ||t_map[i-1][tar_col+2] == 1){
        i--;
        t_map[i][tar_col] = 1;
        t_map[i][tar_col+1] = 1;
        t_map[i-1][tar_col+1] = 1;
        t_map[i-1][tar_col+2] = 1;
    }
    //cout<<"block S1 is setted"<<endl;
    this->check_row(i-1);
    this->check_row(i);
}

void Tetris::fall_S2(const int tar_col)
{
    /*cout<<"block S2 is falling"<<endl;
    if(tar_col+1 >= cols){
        cout<<"block S2 is out of the map!"<<endl;
        return ;
    }*/
    int i=2;

    while(i<rows+4){
        if(t_map[i-1][tar_col] == 0 && t_map[i][tar_col+1] == 0)i++;
        else break;
    }
    //cout<<"now i is : "<<i-3<<endl;

    if(i >= rows+4){
        //cout<<"i is fall out of map"<<endl;
        i--;
        t_map[i-2][tar_col] = 1;
        t_map[i-1][tar_col] = 1;
        t_map[i-1][tar_col+1] = 1;
        t_map[i][tar_col+1] = 1;
    }
    else if(t_map[i-1][tar_col] == 1 || t_map[i][tar_col+1] == 1){
        i--;
        t_map[i-2][tar_col] = 1;
        t_map[i-1][tar_col] = 1;
        t_map[i-1][tar_col+1] = 1;
        t_map[i][tar_col+1] = 1;
    }
    //cout<<"block S2 is setted"<<endl;
    this->check_row(i-2);
    this->check_row(i-1);
    this->check_row(i);
}

void Tetris::fall_Z1(const int tar_col)
{
    /*cout<<"block Z1 is falling"<<endl;
    if(tar_col+2 >= cols){
        cout<<"block Z1 is out of the map!"<<endl;
        return ;
    }*/
    int i=1;

    while(i<rows+4){
        if(t_map[i-1][tar_col] == 0 && t_map[i][tar_col+1] == 0 && t_map[i][tar_col+2] == 0)i++;
        else break;
    }
    //cout<<"now i is : "<<i-3<<endl;

    if(i >= rows+4){
        //cout<<"i is fall out of map"<<endl;
        i--;
        t_map[i-1][tar_col] = 1;
        t_map[i-1][tar_col+1] = 1;
        t_map[i][tar_col+1] = 1;
        t_map[i][tar_col+2] = 1;
    }
    else if(t_map[i-1][tar_col] == 1 || t_map[i][tar_col+1] == 1 ||t_map[i][tar_col+2] == 1){
        i--;
        t_map[i-1][tar_col] = 1;
        t_map[i-1][tar_col+1] = 1;
        t_map[i][tar_col+1] = 1;
        t_map[i][tar_col+2] = 1;
    }
    //cout<<"block Z1 is setted"<<endl;
    this->check_row(i-1);
    this->check_row(i);
}

void Tetris::fall_Z2(const int tar_col)
{
    /*cout<<"block Z2 is falling"<<endl;
    if(tar_col+1 >= cols){
        cout<<"block Z2 is out of the map!"<<endl;
        return ;
    }*/
    int i=2;

    while(i<rows+4){
        if(t_map[i][tar_col] == 0 && t_map[i-1][tar_col+1] == 0)i++;
        else break;
    }
    //cout<<"now i is : "<<i-3<<endl;

    if(i >= rows+4){
        //cout<<"i is fall out of map"<<endl;
        i--;
        t_map[i][tar_col] = 1;
        t_map[i-1][tar_col] = 1;
        t_map[i-1][tar_col+1] = 1;
        t_map[i-2][tar_col+1] = 1;
    }
    else if(t_map[i][tar_col] == 1 || t_map[i-1][tar_col+1] == 1){
        i--;
        t_map[i][tar_col] = 1;
        t_map[i-1][tar_col] = 1;
        t_map[i-1][tar_col+1] = 1;
        t_map[i-2][tar_col+1] = 1;
    }
    //cout<<"block Z2 is setted"<<endl;
    this->check_row(i-2);
    this->check_row(i-1);
    this->check_row(i);
}


void Tetris::check_row(const int tar_row)
{
    //cout<<"checking "<<tar_row-3<<"-th row"<<endl;
    int count_one = 0;
    for(int i=0;i<cols;i++){
        if(t_map[tar_row][i] == 1)count_one++;
    }
    if(count_one == cols){
        //cout<<"the "<<tar_row-3<<"-th row are all 1"<<endl;
        this->delete_row(tar_row);
    }
}

void Tetris::delete_row(const int tar_row)
{
    //cout<<"we are now delete "<<tar_row-3<<"-th row"<<endl;
    for(int i = tar_row;i>0;i--){
        for(int j=0;j<cols;j++){
            t_map[i][j] = t_map[i-1][j];
        }
    }
    //this->print_map();
    for(int i=0;i<cols;i++){
        t_map[0][i] = 0;
    }
    //this->print_map();
}

bool Tetris::end_judge()
{
    bool flag = 0;
    for(int i=0;i<4;i++){
        for(int j=0;j<cols;j++){
            if(t_map[i][j] == 1)flag = 1;
        }
    }
    if(flag == 1)this->print_map();
    return flag;
}
