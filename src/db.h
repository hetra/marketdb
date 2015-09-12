#ifndef DB_H_
#define DB_H_

int get_slug_from_id(int id, char* slug);
int get_name_from_id(int id, char* name);
int get_ticker_from_id(int id, char* ticker);

int load_ts(int id, long long** timestamp, int** open, int** high, int** low, int** close, int** volume);

#endif