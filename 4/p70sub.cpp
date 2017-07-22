
int main(int argc, char* argv[])
{
    // 学生の名前を入力
    cout << "姓を入力してください: ";
    string name;
    cin >> name;
    cout << "こんにちは、" << name << "さん!" << endl;
    // 中間試験と期末試験の点数の入力
    cout << "中間試験と期末試験の点数を入力してください: ";
    double midterm,final;
    cin >> midterm >> final;
    // 宿題の点数を入力させる
    cout << "宿題の点数を全部に入力してください" << "(ただし、最後はend-of-file)";
    vector<double> homework;
    read_hw(cin,homework);

    // 可能なら、最終成績を計算し出力する
    try{
        double final_grade = grade(midterm,final,homework);
        streamsize prec = cout.precision();
        cout << "あなたの最終成績:" << setprecision(3)
            << final_grade << setprecision(prec) << endl;
    }catch(domain_error){
        cout << endl << "あなたの宿題の点数が必要です。"
            << "やり直してください。" << endl;
        return 1;
    }
    return 0;
}
