#include <cstdint>
#include <sample_base_app.hpp>

class Grass_Renderer : public core::sf::Sample_Application
{
public:
    explicit Grass_Renderer(const core::sf::Sample_Application_Create_Info& create_info)
        : core::sf::Sample_Application(create_info)
    {}

    virtual void render(ID3D12GraphicsCommandList9* cmd, double delta_time) noexcept override
    {

    }

private:

};

int32_t main(int32_t argc, const char* argv[])
{
    core::sf::Sample_Application_Create_Info create_info = {
        .window_create_info = {
            .width = 1920,
            .height = 1080,
            .title = "Grass Renderer"
        },
        .context_create_info = {
            .enable_validation = true,
            .enable_gpu_validation = false,
            .disable_tdr = false,
            .feature_level = D3D_FEATURE_LEVEL_12_2,
            .resource_descriptor_heap_size = D3D12_MAX_SHADER_VISIBLE_DESCRIPTOR_HEAP_SIZE_TIER_2,
            .sampler_descriptor_heap_size = D3D12_MAX_SHADER_VISIBLE_SAMPLER_HEAP_SIZE,
            .rtv_descriptor_heap_size = 1024,
            .dsv_descriptor_heap_size = 1024,
            .static_samplers = {}
        },
        .resource_manager_create_info = {}
    };
    Grass_Renderer app(create_info);
    app.run();
    return 0;
}
