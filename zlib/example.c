#include <zlib.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]){
    //�洢ѹ���������
    Bytef compresed[100] = {0};
    uLongf compressed_len;
	
    const Bytef data[] = "helloworld";
    uLong data_len = (uLong)sizeof(data);
	//�洢��ѹ�������
    Bytef uncompressed_data[100];
    uLong uncompressed_data_len;

    //compressed_len ��ȡѹ��������ݳ���
    compress(compresed,&compressed_len,data,data_len);

    //uncompressed_data_len ��ȡ��ѹ��������ݵĳ���
  uncompress(uncompressed_data,&uncompressed_data_len,compresed,compressed_len);

    printf("%ld :%s\n",uncompressed_data_len,uncompressed_data);

    return 0;
}

