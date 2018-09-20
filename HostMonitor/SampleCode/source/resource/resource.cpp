#include "../core_include/api.h"
#include "../core_include/cmd_target.h"
#include "../core_include/rect.h"
#include "../core_include/wnd.h"
#include "../core_include/resource.h"
#include "../gui_include/button.h"
#include "../gui_include/spinbox.h"
#include "../gui_include/my_resource.h"

//fonts
extern  const GUI_FONT GUI_FontHZ_Arial_Narrow_8_11;
extern  const GUI_FONT GUI_FontHZ_Arial_Narrow_9B_12;
extern  const GUI_FONT GUI_FontHZ_Arial_Narrow_10B_13;
extern  const GUI_FONT GUI_FontHZ_Arial_Narrow_12_16;
extern  const GUI_FONT GUI_FontHZ_Arial_Narrow_13B_17;
extern  const GUI_FONT GUI_FontHZ_Arial_Narrow_15B_20;
extern  const GUI_FONT GUI_FontHZ_Arial_Narrow_17B_23;
extern  const GUI_FONT GUI_FontHZ_Arial_Narrow_26B_35;
extern  const GUI_FONT GUI_FontHZ_Arial_Narrow_40B_53;
extern  const GUI_FONT GUI_FontHZ_Arial_Narrow_64B_85;
extern  const GUI_FONT GUI_FontHZ_Arial_Narrow_104B_139;

//icons
extern const GUI_BITMAP bmspin_up_button_normal;
extern const GUI_BITMAP bmspin_up_button_focus;
extern const GUI_BITMAP bmspin_down_button_normal;
extern const GUI_BITMAP bmspin_down_button_focus;

//shapes
extern COLOR_RECT shape_bt_normal[];
extern COLOR_RECT shape_bt_focus[];
extern COLOR_RECT shape_bt_push[];
extern COLOR_RECT shape_listbox_select[];
extern COLOR_RECT shape_listbox_push[];
extern COLOR_RECT shape_listbox_extend[];
extern COLOR_RECT shape_keyboard_bt_normal[];
extern COLOR_RECT shape_keyboard_bt_push[];

void load_theme(int index)
{
	switch (index)
	{
	case 0:
		//font
		c_my_resource::add_font(FONT_ENG_S, &GUI_FontHZ_Arial_Narrow_8_11);
		c_my_resource::add_font(FONT_ENG_SB, &GUI_FontHZ_Arial_Narrow_9B_12);
		c_my_resource::add_font(FONT_ENG_SBM, &GUI_FontHZ_Arial_Narrow_10B_13);
		c_my_resource::add_font(FONT_ENG_SMB, &GUI_FontHZ_Arial_Narrow_12_16);
		c_my_resource::add_font(FONT_ENG_SMB_AA, &GUI_FontHZ_Arial_Narrow_13B_17);
		c_my_resource::add_font(FONT_ENG_MB_AA, &GUI_FontHZ_Arial_Narrow_15B_20);
		c_my_resource::add_font(FONT_ENG_MMB_AA, &GUI_FontHZ_Arial_Narrow_17B_23);
		c_my_resource::add_font(FONT_ENG_MB, &GUI_FontHZ_Arial_Narrow_26B_35);
		c_my_resource::add_font(FONT_ENG_LLB, &GUI_FontHZ_Arial_Narrow_40B_53);
		c_my_resource::add_font(FONT_ENG_LLLB, &GUI_FontHZ_Arial_Narrow_64B_85);
		c_my_resource::add_font(FONT_ENG_LLLLB, &GUI_FontHZ_Arial_Narrow_104B_139);
		//icon
		c_my_resource::add_bitmap(BITMAP_UP_BT_NORMAL, &bmspin_up_button_normal);
		c_my_resource::add_bitmap(BITMAP_UP_BT_FOCUS, &bmspin_up_button_focus);
		c_my_resource::add_bitmap(BITMAP_DOWN_BT_NORMAL, &bmspin_down_button_normal);
		c_my_resource::add_bitmap(BITMAP_DOWN_BT_FOCUS, &bmspin_down_button_focus);
		//shape
		c_my_resource::add_shape(BUTTON_NORMAL, shape_bt_normal);
		c_my_resource::add_shape(BUTTON_FOCUS, shape_bt_focus);
		c_my_resource::add_shape(BUTTON_PUSH, shape_bt_push);
		c_my_resource::add_shape(LIST_BOX_SELECT, shape_listbox_select);
		c_my_resource::add_shape(LIST_BOX_PUSH, shape_listbox_push);
		c_my_resource::add_shape(LIST_BOX_EXTEND, shape_listbox_extend);
		c_my_resource::add_shape(KEY_BUTTON_NORMAL, shape_keyboard_bt_normal);
		c_my_resource::add_shape(KEY_BUTTON_PUSH, shape_keyboard_bt_push);
		//color
		c_my_resource::add_color(CTRL_FORE_GROUND, GLT_RGB(255, 255, 255));
		c_my_resource::add_color(CTRL_BACK_GROUND, GLT_RGB(36, 36, 36));
		break;
	case 1:
		//font
		c_my_resource::add_font(FONT_ENG_S, &GUI_FontHZ_Arial_Narrow_8_11);
		c_my_resource::add_font(FONT_ENG_SB, &GUI_FontHZ_Arial_Narrow_9B_12);
		c_my_resource::add_font(FONT_ENG_SBM, &GUI_FontHZ_Arial_Narrow_10B_13);
		c_my_resource::add_font(FONT_ENG_SMB, &GUI_FontHZ_Arial_Narrow_12_16);
		c_my_resource::add_font(FONT_ENG_SMB_AA, &GUI_FontHZ_Arial_Narrow_13B_17);
		c_my_resource::add_font(FONT_ENG_MB_AA, &GUI_FontHZ_Arial_Narrow_15B_20);
		c_my_resource::add_font(FONT_ENG_MMB_AA, &GUI_FontHZ_Arial_Narrow_17B_23);
		c_my_resource::add_font(FONT_ENG_MB, &GUI_FontHZ_Arial_Narrow_26B_35);
		c_my_resource::add_font(FONT_ENG_LLB, &GUI_FontHZ_Arial_Narrow_40B_53);
		c_my_resource::add_font(FONT_ENG_LLLB, &GUI_FontHZ_Arial_Narrow_64B_85);
		c_my_resource::add_font(FONT_ENG_LLLLB, &GUI_FontHZ_Arial_Narrow_104B_139);
		//icon
		c_my_resource::add_bitmap(BITMAP_UP_BT_NORMAL, &bmspin_up_button_normal);
		c_my_resource::add_bitmap(BITMAP_UP_BT_FOCUS, &bmspin_up_button_focus);
		c_my_resource::add_bitmap(BITMAP_DOWN_BT_NORMAL, &bmspin_down_button_normal);
		c_my_resource::add_bitmap(BITMAP_DOWN_BT_FOCUS, &bmspin_down_button_focus);
		//no shape
		//color
		c_my_resource::add_color(CTRL_FORE_GROUND, GLT_RGB(36, 36, 36));
		c_my_resource::add_color(CTRL_BACK_GROUND, GLT_RGB(255, 255, 255));
		break;
	default:
		ASSERT(FALSE);
		break;
	}
	
}