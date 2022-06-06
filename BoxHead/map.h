#pragma once

#include "stdafx.h"

// ������ �� ���� ����, ȭ�� �� �׷����� ������ ���� ��輱 ����
#define MAP_NONE 100

// ������Ʈ�� �̵��� �� �ִ� ����
#define MAP_FLOOR_TYPE1 200
#define MAP_FLOOR_TYPE2 201

// ������Ʈ�� �̵��� �� ���� ����
#define MAP_WALL_TYPE1 300
#define MAP_WALL_TYPE2 301
#define MAP_WALL_TYPE3 302

using namespace std;

class Map
{
private:
    int id;      // ����Ǵ� ���� �̸��̶� ����
    POINT count; // �� Ÿ���� ����
    vector<vector<int>> map;
    POINT playerSpawn;        // �� �� ������ ���
    vector<POINT> enemySpawn; // ������ ���� ����?

    POINT size; // �� ũ�� - ���� �������� �ʰ� ������ ������ ����ҵ�?
    BOOL isEditMode;

public:
    Map();
    void draw(HDC);

    int load(int);

    int get_tile_type(POINT);
    POINT get_player_spawn();
    vector<POINT> get_enemy_spawn();

    // if on EditMode
    void on_editMode();
    BOOL get_isEditMode();
    void tile_change(POINT, int);
    int save();

    // test
    void test_print_file();
    void test_out_content();
};