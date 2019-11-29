//light
int light_0 = 0, s_light_0;

//windmill
int switch_on = 0;
double br = 0;

//for sphere
static int slices = 16;
static int stacks = 16;


//defining rotation angle
double rx = 0, ry = 0, rz = 0;

//defining translation
double tx = 0, ty = 0, tz = 0;

//defining scaling
double sx = 1, sy = 1, sz = 1;

//translation, scaling, rotation flags
int tr = 0; //translation
int ro = 0; //rotation
int sc = 0; //scaling

GLfloat total_light[4];

//normal_light
const GLfloat light_ambient[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 0.0f, 10.0f, 0.0f, 0.0f };


//spotlight
const GLfloat AmbientLight[]    = {1.0f, 0.0, 0.0, 0.0};
const GLfloat DiffuseLight[]    = {0.3, 0.3, 0.3, 1.0};
const GLfloat SpecularLight[]    = {1.0, 1.0, 1.0, 1.0};
const GLfloat Noemit[] = {0.0, 0.0, 0.0, 1.0};
GLfloat LightPosition[]    = {5, 6, 0, 1};
GLfloat dirVector0[]= { -1.0, -1.0, 0.0, 1.0};

//material_color

//table

//top
const GLfloat t_t_mat_ambient[]    = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat t_t_mat_diffuse[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat t_t_mat_specular[]   = { 0.9f, 0.9f, 0.9f, 1.0f };
const GLfloat t_t_high_shininess[] = { 90.0f };

//base
const GLfloat t_b_mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat t_b_mat_diffuse[]    = { 0.6f, 0.4f, 0.5f, 1.0f };
const GLfloat t_b_mat_specular[]   = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat t_b_high_shininess[] = { 10.0f };

//legs
const GLfloat t_l_mat_ambient[]    = { 0.6f, 0.6f, 0.6f, 1.0f };
const GLfloat t_l_mat_diffuse[]    = { 0.6f, 0.4f, 0.5f, 1.0f };
const GLfloat t_l_mat_specular[]   = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat t_l_high_shininess[] = { 10.0f };


//windmill

//base
const GLfloat w_b_mat_ambient[]    = { 0.71f, 0.60f, 0.298f, 1.0f };
const GLfloat w_b_mat_diffuse[]    = { 0.6f, 0.4f, 0.5f, 1.0f };
const GLfloat w_b_mat_specular[]   = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat w_b_high_shininess[] = { 10.0f };

//yellow_cone
const GLfloat w_y_c_mat_ambient[]    = { 1.0f, 1.0f, 0.0f, 1.0f };
const GLfloat w_y_c_mat_diffuse[]    = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat w_y_c_mat_specular[]   = { 0.1f, 0.1f, 0.0f, 1.0f };
const GLfloat w_y_c_high_shininess[] = { 0.0f };


//circular plate
const GLfloat w_c_p_mat_ambient[]    = { 0.7529f, 0.7529f, 0.7529f, 1.0f };
const GLfloat w_c_p_mat_diffuse[]    = { 0.6f, 0.4f, 0.5f, 1.0f };
const GLfloat w_c_p_mat_specular[]   = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat w_c_p_high_shininess[] = { 10.0f };


//main cylinder
const GLfloat w_m_c_mat_ambient[]    = { 0.529f, 0.808f, 0.922f, 1.0f };
const GLfloat w_m_c_mat_diffuse[]    = { 0.6f, 0.4f, 0.5f, 1.0f };
const GLfloat w_m_c_mat_specular[]   = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat w_m_c_high_shininess[] = { 90.0f };


//black cylinder
const GLfloat w_b_c_mat_ambient[]    = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat w_b_c_mat_diffuse[]    = { 0.6f, 0.4f, 0.5f, 1.0f };
const GLfloat w_b_c_mat_specular[]   = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat w_b_c_high_shininess[] = { 10.0f };

//green_blade
const GLfloat w_g_b_mat_ambient[]    = { 0.004f, 0.196f, 0.125f, 1.0f };
const GLfloat w_g_b_mat_diffuse[]    = { 0.6f, 0.4f, 0.5f, 1.0f };
const GLfloat w_g_b_mat_specular[]   = { 0.3f, 0.3f, 0.3f, 1.0f };
const GLfloat w_g_b_high_shininess[] = { 5.0f };


//blue_blade
const GLfloat w_b_b_mat_ambient[]    = { 0.0f, 0.0f, 0.502f, 1.0f };
const GLfloat w_b_b_mat_diffuse[]    = { 0.6f, 0.4f, 0.5f, 1.0f };
const GLfloat w_b_b_mat_specular[]   = { 0.3f, 0.3f, 0.3f, 1.0f };
const GLfloat w_b_b_high_shininess[] = { 5.0f };


//red_blade
const GLfloat w_r_b_mat_ambient[]    = { 0.545f, 0.0f, 0.0f, 1.0f };
const GLfloat w_r_b_mat_diffuse[]    = { 0.6f, 0.4f, 0.5f, 1.0f };
const GLfloat w_r_b_mat_specular[]   = { 0.3f, 0.3f, 0.3f, 1.0f };
const GLfloat w_r_b_high_shininess[] = { 5.0f };

//jax
const GLfloat j_mat_ambient[]    = { 0.71f, 0.30f, 0.298f, 1.0f };
const GLfloat j_mat_diffuse[]    = { 0.2f, 0.2f, 0.2f, 1.0f };
const GLfloat j_mat_specular[]   = { 0.3f, 0.3f, 0.3f, 1.0f };
const GLfloat j_high_shininess[] = { 10.0f };
