Vtx jrb_dl_Level_Mesh_mesh_layer_1_vtx_cull[8] = {
	{{ {-9157, 0, 9157}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-9157, 0, 9157}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-9157, 0, -9157}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-9157, 0, -9157}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {9157, 0, 9157}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {9157, 0, 9157}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {9157, 0, -9157}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {9157, 0, -9157}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx jrb_dl_Level_Mesh_mesh_layer_1_vtx_0[4] = {
	{{ {-9157, 0, 9157}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {9157, 0, 9157}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {9157, 0, -9157}, 0, {1008, -16}, {0, 127, 0, 255} }},
	{{ {-9157, 0, -9157}, 0, {-16, -16}, {0, 127, 0, 255} }},
};

Gfx jrb_dl_Level_Mesh_mesh_layer_1_tri_0[] = {
	gsSPVertex(jrb_dl_Level_Mesh_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx mat_jrb_dl_Grass_Example[] = {
	gsSPLightColor(LIGHT_1, 0x00FF00FF),
	gsSPLightColor(LIGHT_2, 0x007F00FF),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_revert_jrb_dl_Grass_Example[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx jrb_dl_Level_Mesh_mesh_layer_1[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(jrb_dl_Level_Mesh_mesh_layer_1_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_jrb_dl_Grass_Example),
	gsSPDisplayList(jrb_dl_Level_Mesh_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_jrb_dl_Grass_Example),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

