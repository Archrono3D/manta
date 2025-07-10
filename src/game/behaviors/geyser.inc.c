void bhv_geyser_interact(void){
    switch (o->oAction){
    case 0:
    if (obj_check_if_collided_with_object(o, gMarioObject) == 1 ) {
        cur_obj_play_sound_2(SOUND_OBJ_DIVING_IN_WATER);
        set_mario_action(gMarioState, ACT_TRIPLE_JUMP, 0);
        gMarioState->vel[1] = 90.0f;
        gMarioState->forwardVel = 20.0f;
    }
        cur_obj_play_sound_2(SOUND_OBJ_WALKING_WATER);
        spawn_mist_from_global();
        o->oTimer = 0;
        o->oAction = 1;
    break;
    case 1:
     if (o->oTimer > 15){
        obj_scale_xyz(o,2,1,2);
     }
    if (o->oTimer > 50){
    o->oAction = 0; 
    obj_scale_xyz(o, 1, 2, 1);
    }
}
}
void bhv_geyser_loop(void){
    bhv_geyser_interact();
}