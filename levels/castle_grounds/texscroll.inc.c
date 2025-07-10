void scroll_gfx_mat_castle_grounds_dl_f3dlite_material_002() {
	Gfx *mat = segmented_to_virtual(mat_castle_grounds_dl_f3dlite_material_002);

	shift_s(mat, 16, PACK_TILESIZE(0, 1));
	shift_t(mat, 16, PACK_TILESIZE(0, 1));

};

void scroll_castle_grounds() {
	scroll_gfx_mat_castle_grounds_dl_f3dlite_material_002();
};
